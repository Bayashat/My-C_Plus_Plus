/*         P8. Main Diagonl:       改编与 Lab_4 - O

需要输出给定二维数组的 Main Diagonal : 从左上到右下的元素
例子:

3
-1 5 6
2 -5 5          -1 -5 6
5 0 -6
*/
#include <iostream>
using namespace std;

int main()
{
    int n, max = -1e9 - 1, x = 0;
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
            if (i == j)
            {
                cout << a[i][j] << " ";
            }
        }
    }
    return 0;
}