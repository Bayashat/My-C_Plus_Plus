/*      
            4. deque大小操作
功能描述:
    * 对deque容器的大小进行操作

函数原型:
    1. deque.empty();        //判断容器是否为空
    2. deque.size();         //返回容器中元素的个数
    3. deque.resize(num);    //重新指定容器的长度为num,若容器变长，则以默认值填充新位置。
                            //如果容器变短，则末尾超出容器长度的元素被删除。
    4. deque.resize(num, elem); //重新指定容器的长度为num,若容器变长，则以elem值填充新位置
                                //如果容器变短，则末尾超出容器长度的元素被删除

*/
#include <iostream>
using namespace std;
#include <deque>

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

    // 1.判断容器是否为空
    if (d1.empty())
    {
        cout << "d1为空!" << endl;
    }
    else
    {
        cout << "d1不为空!" << endl;
        // 2.统计大小
        cout << "d1的大小为：" << d1.size() << endl; // 10
    }

    // 3.重新指定大小
    d1.resize(15);
    printDeque(d1); // 0,1,2,3,4,5,6,7,8,9,0,0,0,0,0

    d1.resize(5);
    printDeque(d1); // 0,1,2,3,4
}
int main()
{
    test01();

    return 0;
}
/*
总结:
    deque没有容量的概念
    判断是否为空 --- empty
    返回元素个数 --- size
    重新指定个数 --- resize
*/