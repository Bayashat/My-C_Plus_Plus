/*       3.  map大小和交换

********* :  Multimap 的大小和交换操作 与Map一样

**功能描述： 
    * 统计map容器大小以及交换map容器

函数原型： 
    -  size();          //返回容器中元素的数目
    -  empty();        //判断容器是否为空
    -  swap(st);      //交换两个集合容器
*/
#include <iostream>
#include <map>
using namespace std;

void printMap(map<int,int> &m)
{
    for(map<int,int>::iterator it = m.begin();it!=m.end();it++)
    {
        cout << "key= " << (*it).first << " value= " << it->second << endl;
    }
    cout << endl;
}

    // 1.大小 
void test01()
{
    // 创建：
    map<int,int> m;
    // 插入：
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));
    // 判断是否为空：
    if(m.empty()) cout << "empty" << endl;
    else cout << "Not empty" << endl; // 1
    // 大小：
    cout << m.size()<< endl; // 3
}
    // 2. 交换：
void test02()
{
    // 创建第一个map：
    map<int,int> m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));

    // 创建第二个map：
    map<int,int> m2;
    m2.insert(pair<int,int>(4,100));
    m2.insert(pair<int,int>(5,200));
    m2.insert(pair<int,int>(6,300));

    
    cout << "before:" << endl;
    printMap(m);
    printMap(m2);
    
    // 交换代码：
    m.swap(m2);

    cout << "after" << endl;
    printMap(m);
    printMap(m2);
}    
int main()
{
    test02();

    return 0;
}
/*
    总结: 
统计大小 --- size
判断是否为空 --- empty
交换容器 --- swap
*/