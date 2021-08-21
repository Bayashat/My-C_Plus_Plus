/*              4. Reverse
功能 : 将容器内元素进行反转
函数原型:  reverse(iterator beg, iterator end);

// 反转指定范围的元素
// beg 开始迭代器
// end 结束迭代器

*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class myPrint   // 遍历仿函数
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};
/*
void myPrint(int val)   也可以只写此普通函数,传入时只需写 函数名
{
    cout << val << " ";
}
*/
void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(50);
    v.push_back(20);
    v.push_back(40);

    cout << "反转前： " << endl;
    for_each(v.begin(), v.end(), myPrint()); // 10 30 50 20 40
    cout << endl;

    cout << "反转后： " << endl;
    reverse(v.begin(), v.end());

    for_each(v.begin(), v.end(), myPrint()); // 40 20 50 30 10
    cout << endl;
}
int main()
{
    test01();

    return 0;
}
//  总结: reverse反转区间内元素，面试题可能涉及到 