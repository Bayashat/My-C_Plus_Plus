#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n][n];
    int len = n, k = 1, p = 0, i = 0;

    while (k <= n * n)
    {
        for (i = p; i < len; i++)
        {
            a[p][i] = k++;
        }
        for (i = p + 1; i < len; i++)
        {
            a[i][len - 1] = k++;
        }
        for (i = len - 2; i >= p; i--)
        {
            a[len - 1][i] = k++;
        }
        for (i = len - 2; i > p; i--)
        {
            a[i][p] = k++;
        }
        p++, len = len - 1;
    }
    if (!n % 2)
    {
        a[(n + 1) / 2][(n + 1) / 2] = n * n;
    }

    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}