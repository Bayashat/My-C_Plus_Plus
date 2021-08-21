#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][n];

    int sum = 1e9;
    int index = 0;
    for(int i = 0; i < n; i++)
    {
        int sum2 = 0;
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            sum2 += a[i][j];
        }
        if(sum2 < sum)  
        {
            sum = sum2;
            index = i;
        }
    }

   cout << index + 1;

    return 0;
}