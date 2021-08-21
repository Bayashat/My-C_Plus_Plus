/*      2. set构造和赋值

**** Multiset 的构造和赋值操作与set一样

功能描述: 创建set容器以及赋值

构造: 

* 1. set<T> st;               //默认构造函数
* 2. set(const set &st);      //拷贝构造函数

赋值: 

*  set& operator=(const set &st);   //重载等号操作符
*/
#include <iostream>
#include <set>
using namespace std;

// 打印函数:
void printSet(set<int> &s)
{
    for(set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
void test01()
{
    // 1.默认构造函数：
    set<int> s1;
    // 插入数据 只有insert 方式
    s1.insert(10);
    s1.insert(40);
    s1.insert(30);
    s1.insert(20);
    s1.insert(30);

    // 遍历容器:
    // Set 容器特点:
        // 1. 所有元素插入时被自动排序
        // 2. 不允许插入重复值
    printSet(s1);    // 10 20 30 40

    //  2.拷贝构造函数:
    set<int>s2(s1); 
    printSet(s2);    // 10 20 30 40

    //  3.赋值
    set<int> s3;
    s3 = s2;
    printSet(s3);   // 10 20 30 40
}

int main()
{
    test01();
}
/*
    总结: 
set容器插入数据时用insert
set容器插入数据的数据会自动排序
*/