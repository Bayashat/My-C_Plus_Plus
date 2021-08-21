/*                4.  map插入和删除

********* :  Multimap 的插入和删除操作 与Map一样

** 功能描述: 
    * map容器进行插入数据和删除数据

** 函数原型: 

    插入:  insert(elem) 
 1. m.insert(a, b);
 2. m.insert(pair<int,int>( a, b));
 3. m.insert(make_pair( a, b));
 4. m.insert(map<int,int>::value_type( a, b));
 5. m[a] = b;

    -  clear();         清除所有元素
    -  erase(pos);      删除pos迭代器所指的元素，返回下一个元素的迭代器。
    -  erase(beg, end); 删除区间[beg,end)的所有元素, 返回下一个元素的迭代器。
    -  erase(key);      删除容器中值为key的元素
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
    map<int,int> m;
    // 1.插入:
    
        // 第一种：
    m.insert(1, 20);

        // 第二种：
    m.insert(pair<int,int>(1,10));

        // 第三种：
    m.insert(make_pair(2,20));

        // 第四种：
    m.insert(map<int,int>::value_type(3,30));

        // 第五种:
    m[4] = 40;          // 不建议用这种方式插入，它的用途是可以利用key访问value

    cout << m[5] << endl; // 0  并没有第五个元素,但是仍然输出: 因为会直接创建新的

    printMap(m);    // (1 10), (2 20), (3 30), (4 40) (5 0)

    // 2. 删除：
    m.erase(m.begin());
    printMap(m);    //  (2 20), (3 30), (4 40) (5 0)

    m.erase(3);     // 按照key删除
    printMap(m);    //  (2 20), (4 40) (5 0)

    // 清空：
    m.erase(m.begin(),m.end()); 

    m.clear(); 
    printMap(m); //
}
   
int main()
{
    test01();

    return 0;
}
/*
    总结: 
map插入方式很多, 记住其一即可
插入 --- insert
删除 --- erase
清空 --- clear
*/