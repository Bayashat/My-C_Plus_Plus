/*
        7. deque 排序

功能描述:
    利用算法实现对deque容器进行排序
    默认排序规则是: 从小到大升序排序
算法:
    升序: sort(iterator beg, iterator end)    //对beg和end区间内元素进行排序
    降序: sort(rbegin(), rend())
*/
#include <iostream>
using namespace std;
#include <deque>
#include <algorithm>

void printDeque(const deque<int> &d)
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
void test01()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_front(100);
    d.push_front(200);
    printDeque(d);      // 200,100,10,20

    sort(d.begin(), d.end());
    printDeque(d);  // 10,20,100,200
}
int main()
{
    test01();

    return 0;
}
// 总结: sort算法非常实用, 使用时包含头文件 algorithm 即可