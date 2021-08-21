/*              1. Accumulate

功能 : 计算区间内 容器元素累计总和
函数原型:  accumulate(iterator beg, iterator end, value);

// beg 开始迭代器
// end 结束迭代器
// value 起始值

*/
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void test01()
{
    vector<int> v;
    for (int i = 0; i <= 100; i++)
    {
        v.push_back(i);
    }
    
    // 参数3 是 起始累加值 
    int total = accumulate(v.begin(), v.end(), 0); // 如果这儿写 1000, 结果会是 6050
    cout << "total = " << total << endl; // 5050
}
int main()
{
    test01();

    return 0;
}
//  总结 : accumulate使用时头文件注意是 numeric, 这个算法很实用 