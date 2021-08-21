/*      4. set大小和交换

**** Multiset 的大小与交换操作与set一样

**功能描述: 

    * 统计set容器大小以及交换set容器

**函数原型: 

    *  size();       //返回容器中元素的数目
    *  empty();      //判断容器是否为空
    *  swap(st);     //交换两个集合容器
*/

#include <iostream>
#include <set>
using namespace std;

// 打印函数:
void printSet(set<int> &s) 
{
    for(set<int> :: iterator it = s.begin();it!= s.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

// 1.大小：
void test01()
{
    set<int> s1;
    
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);

    printSet(s1);   // 10 20 30 40
    // 1. 判断是否为空：
    if(s1.empty())
    {
        cout << "s1 is Empty" << endl;
    }
    else
    {
        cout << "s1 isn't empty" << endl;
        // 2. 大小: 
        cout << "s1's size is " << s1.size() << endl; // 4
    }
}

// 2.交换：
void test02()
{
    // 第一个容器: 
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);

    // 第二个容器：
    set<int> s2;
    
    s1.insert(100);
    s1.insert(300);
    s1.insert(200);
    s1.insert(400);

    cout << "before:" << endl;
    printSet(s1);   // 10 20 30 40
    printSet(s2);   // 100 200 300 400

    cout << "After:" << endl;
    s1.swap(s2);    // 这是交换代码

    printSet(s1);   // 100 200 300 400
    printSet(s2);   // 10 20 30 40


}

int main()
{
    test02();
}
/*
    总结: 
统计大小 --- size
判断是否为空 --- empty
交换容器 --- swap
*/