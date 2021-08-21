/*          P9. 2-nd diagonal:  改编于 Lab_4 - P

需要输出给定二维数组的 2-nd diagonal: 从右上到左下

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                cout << a[i][j] << " ";
            }
        }
    }
    return 0;
}