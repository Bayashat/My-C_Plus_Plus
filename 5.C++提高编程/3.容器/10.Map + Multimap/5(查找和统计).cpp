/*          4. map查找和统计

********* :  Multimap 的查找和统计操作 与Map一样

**功能描述: 
     对map容器进行查找数据以及统计数据

**函数原型: 
    -  find(key);                  //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回map.end();
    -  count(key);                //统计key的元素个数

** Multimap 还有一种查找方式 : 
    * vequal_range
*/
#include <iostream>
#include <map>
using namespace std;

void printMap(map<int,int>&m)
{
    for(map<int,int>::iterator it = m.begin();it!=m.end();it++)
    {
        cout << "key= " << (*it).first << " value= " << it->second << endl;
    }
    cout << endl;
}

void test01()
{
    // 1. 查找：
    map<int,int> m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));

    map<int,int>::iterator pos = m.find(3);// 不管你查到了还是没查到，它都会返回一个迭代器， 所以需要一个迭代器接受

    if(pos != m.end()) 
        cout << "Found key= " << (*pos).first << " value= " << pos->second << endl;
    else 
        cout << "Not found" << endl;

    // 2.统计: 
    int num = m.count(3);       // count统计而言，结果无非是 1 或 0 ;
    cout << num << endl;        // multimap的可能会大于0

    // 3. Multimap 的 equal_range():

    multimap<string, int> mm;

    mm.insert(make_pair("banana",300));
    mm.insert(make_pair("apple", 123));
    mm.insert(make_pair("apple", 124));
    mm.insert(make_pair("apple", 125));
    mm.insert(make_pair("apple", 126));
    mm.insert(make_pair("apple2", 140));


    // 给定字符串, 我们需要输出所以在 multimap里的 value值
    string str; // apple
    cin >> str;
    pair<multimap<string, int> :: iterator, multimap<string, int> :: iterator> res = mm.equal_range(str);

    multimap<string, int> :: iterator  it;

    for(it = res.first; it != res.second; ++it)
    {
        cout <<  (*it).second << " ";   // 123 124 125 126
        //  也可以 cout << it->second << " "; 
    }
}
int main()
{
    test01();

    return 0;
}
/*
总结：
    - 查找   ---  find    (返回的是迭代器)
    - 统计   ---  count  (对于map，结果为0或者1)
*/