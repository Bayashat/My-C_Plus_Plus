/*          3.1 generate 生成器

顾名思义，std::generate是一种STL算法, 用于根据生成器函数生成数字, 然后将这些值分配给容器中[第一个，最后一个]范围内的元素。

生成器功能必须由用户定义, 并被连续调用以分配编号。
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int x = 0;
int f()
{
    x++;
    return x * x; // 输出 数的平方
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    generate(v.begin(), v.end(), f); // 填充出f函数所指的

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}