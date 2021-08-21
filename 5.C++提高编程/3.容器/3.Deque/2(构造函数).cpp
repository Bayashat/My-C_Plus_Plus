/*
        2 deque构造函数
    功能描述:
* deque容器构造

    函数原型:

 1. deque<T> deqT;              //默认构造形式
 2. deque(beg, end);            //构造函数将[beg, end)区间中的元素拷贝给本身。
 3. deque(n, elem);             //构造函数将n个elem拷贝给本身。
 4. deque(const deque &deq);    //拷贝构造函数

*/
#include <iostream>
using namespace std;
#include <deque>

void printDeque(const deque<int> &d)  // 防止修改掉,加 const
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) // 将迭代器也加 const 改为只读迭代器
    {
        // *it = 100  容器的数据不可以修改了
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    deque<int> d1; //无参构造函数
    for (int i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    printDeque(d1); // 0,1,2,3,4,5,6,7,8,9

    deque<int> d2(d1.begin(), d1.end());
    printDeque(d2); // 0,1,2,3,4,5,6,7,8,9

    deque<int> d3(10, 100); // 10个100
    printDeque(d3); // 100,100,100,100,100,100,100,100,100,100

    deque<int> d4 = d3;
    printDeque(d4); // 100,100,100,100,100,100,100,100,100,100
}
int main()
{
    test01();
    system("pause");
    return 0;
}
//  总结: deque容器和vector容器的构造方式几乎一致，灵活使用即可