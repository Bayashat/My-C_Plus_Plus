/*          P1    按除数排序

给定包含数字的数组
需要将数字们按照他们的 除数(Бөлгіштері) 来升序排序

*/
#include <iostream>
#include <algorithm>
using namespace std;

int cnt(int x) // 创建了可以输出数字的бөлгіш的函数
{
    int res = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
            res++;
    }
    return res;
}
bool f(int a, int b) // 仿函数
{
    int c = cnt(a);
    int d = cnt(b);
    if(c == d)  // 加了此条件语句因为: 如果两个数的 除数是相同数目的,则将这两个数字自己比大小
    {
        return a < b;
    }
    return c < d;
}

int main()
{
    int a[] = {11, 2, 43, 41, 5, 6, 17, 8, 9, 10};
    int len = sizeof(a) / sizeof(int);

    sort(a, a + len, f);

    for (int i = 0; i < len; i++)
    {
        cout << a[i] << "->" << cnt(a[i]) << endl;
    }

    return 0;
}
