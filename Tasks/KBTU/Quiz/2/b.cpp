#include <iostream>
#include <algorithm>
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

    int x = n - 1;
    for (int k = 0; k < (n * 2 - 1); k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j - i == x)
                {
                    cout << a[i][j] << " ";
                }
            }
        }
        cout << endl;
        x--;
    }
    return 0;
}