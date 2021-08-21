/*
        3 deque赋值操作
功能描述:
    给deque容器进行赋值
函数原型:
    1. deque& operator=(const deque &deq);     //重载等号操作符
    2. assign(beg, end);                       //将[beg, end)区间中的数据拷贝赋值给本身。
    3. assign(n, elem);                        //将n个elem拷贝赋值给本身.

*/
#include <iostream>
#include <deque>
using namespace std;

void printDeque(const deque<int> &d) // 防止修改掉,加 const
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) // 将迭代器也加 const 改为只读迭代器
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    deque<int> d1;
    for (int i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    printDeque(d1); // 0,1,2,3,4,5,6,7,8,9

    // 1. opertaor= 赋值:
    deque<int> d2;
    d2 = d1;
    printDeque(d2); // 0,1,2,3,4,5,6,7,8,9

    // 2. Assighn 赋值-1:
    deque<int> d3;
    d3.assign(d1.begin(), d1.end());
    printDeque(d3); // 0,1,2,3,4,5,6,7,8,9

    // 3. Assign 赋值-2:
    deque<int> d4;
    d4.assign(10, 100);
    printDeque(d4); // 100,100,100,100,100,100,100,100,100,100
}
int main()
{
    test01();

    return 0;
}
// 总结: deque赋值操作也与vector相同, 需熟练掌握.