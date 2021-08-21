/*          3. Set_difference

功能 : 求两个集合的差集
v1 和 v2 的差集: 只属于 v1, 不属于 v2 的数据
v2 和 v1 的差集: 只属于 v2, 不属于 v1 的数据

函数原型 : set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);

// 注意 : 两个集合必须是有序序列
// beg1 容器1开始迭代器 // end1 容器1结束迭代器 
// beg2 容器2开始迭代器 // end2 容器2结束迭代器 
// dest 目标容器开始迭代器

*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class myPrint
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};
void test01()
{
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);      // 0~9
        v2.push_back(i + 5);  // 5~14
    }

    vector<int> vTarget;
    //取两个里面较大的值给目标容器开辟空间
    vTarget.resize(max(v1.size(), v2.size()));

    //返回目标容器的最后一个元素的迭代器地址
    cout << "v1与v2的差集为： " << endl;
    vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
    for_each(vTarget.begin(), itEnd, myPrint());    // 0 1 2 3 4
    cout << endl;

    cout << "v2与v1的差集为： " << endl;
    itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
    for_each(vTarget.begin(), itEnd, myPrint());    // 10 11 12 13 14
    cout << endl;
}
int main()
{
    test01();

    return 0;
}
/*
    总结: 
 1. 求差集的两个集合必须的有序序列
 2. 目标容器开辟空间需要从两个容器取较大值
 3. set_difference返回值既是差集中最后一个元素的位置
*/