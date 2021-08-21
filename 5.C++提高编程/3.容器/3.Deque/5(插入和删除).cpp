/*
        5. deque 插入和删除
功能描述:
    向deque容器中插入和删除数据

函数原型:

1. 两端插入操作:
    1. push_back(elem); //在容器尾部添加一个数据
    2. push_front(elem); //在容器头部插入一个数据
    3. pop_back(); //删除容器最后一个数据
    4. pop_front(); //删除容器第一个数据
2. 指定位置操作：
    1. insert(pos,elem); //在pos位置插入一个elem元素的拷贝，返回新数据的位置。
    2. insert(pos,n,elem); //在pos位置插入n个elem数据，无返回值。
    3. insert(pos,beg,end); //在pos位置插入[beg,end)区间的数据，无返回值。
    4. clear(); //清空容器的所有数据
    5. erase(beg,end); //删除[beg,end)区间的数据，返回下一个数据的位置。
    6. erase(pos); //删除pos位置的数据，返回下一个数据的位置

*/
#include <iostream>
using namespace std;
#include <deque>

void printDeque(const deque<int> &d) // // 防止修改掉,加 const
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) // 将迭代器也加 const 改为只读迭代器
    { 
        cout << *it << " ";
    }
    cout << endl;
}
// 1.两端操作
void test01()
{
    deque<int> d;
    // 1.尾插
    d.push_back(10);
    d.push_back(20);

    // 2.头插
    d.push_front(100);
    d.push_front(200);
    printDeque(d); // 200,100,10,20

    // 3.尾删
    d.pop_back();

    // 4.头删
    d.pop_front();
    printDeque(d); // 100,10
}
// 2.插入
void test02()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_front(100);
    d.push_front(200);
    printDeque(d);  // 200,100,10,20

    // 1.指定位置插::
    d.insert(d.begin(), 1000); // 插1个1000
    printDeque(d);  // 1000,200,100,10,20

    // 2.指定位置插n个elem:
    d.insert(d.begin(), 2, 10000); // 插2个10000
    printDeque(d);  // 10000,10000,1000,200,100,10,20

    // 3.按照区间进行插入:
    deque<int> d2;
    d2.push_back(1);
    d2.push_back(2);
    d2.push_back(3);
    d.insert(d.begin(), d2.begin(), d2.end()); 
    printDeque(d); // 1,2,3,10000,10000,1000,200,100,10,20
}
// 3.删除
void test03()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_front(100);
    d.push_front(200);
    printDeque(d);  // 200,100,10,20

    // 1.指定位置删除-1:
    d.erase(d.begin());  
    printDeque(d);      // 100,10,20

    // 2.指定位置删除-2:
    d.erase(d.begin() + 1); // 会删除从头部往后一个数据
    printDeque(d); // 100,20

    // 3.指定位置删除-3:
    deque<int>::iterator it = d.begin();
    it+=2;
    d.erase(it); // 会删除从头开始第3个元素

    // 4.按照区间删除:
    d.erase(d.begin(), d.end());

    // 5. 清空:
    d.clear();
    printDeque(d); // 

}
int main()
{
    //test01();
    //test02();
    test03();

    return 0;
}
/*
总结:
    插入和删除提供的位置是迭代器!
    尾插 --- push_back
    尾删 --- pop_back
    头插 --- push_front
    头删 --- pop_front
*/