/*

        7. List 反转和排序

功能描述:
    将容器中的元素反转，以及将容器中的数据进行排序
函数原型:
    reverse(); //反转链表
    sort(); //链表排序

*/
#include <iostream>
#include <list>
using namespace std;

void printList(const list<int> &L)
{
    for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
// 指定排序规则:
bool myCompare(int val1, int val2)
{
    return val1 > val2;
}

void test01()
{
    list<int> L;
    L.push_back(20);
    L.push_back(10);
    L.push_back(50);
    L.push_back(40);
    L.push_back(30);
    printList(L);   // 20 10 50 40 30

    // 1. 反转容器的元素
    L.reverse();
    printList(L);   // 30 40 50 10 20

    // 2.排序
    sort(L.begin(), L.end()); // 错误,所有不支持随机访问迭代器的容器,不可以用标准算法.

    // 不支持随机访问的迭代器的容器,内部会提供对应一些算法
    L.sort(); //默认的排序规则 从小到大
    printList(L);   // 10 20 30 40 50

    L.sort(myCompare); //指定规则, 从大到小
    printList(L);   // 50 40 30 20 10
}
int main()
{
    test01();

    return 0;
}