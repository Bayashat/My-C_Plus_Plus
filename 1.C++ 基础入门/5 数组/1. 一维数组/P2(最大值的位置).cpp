/*      P2.最大值的位置

需要在数组里输出最大值的索引(index)

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    int x = -1e9, y = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (a[i] > x)
        {
            x = a[i], y = i;
        }
    }
    cout << y;

    return 0;
}