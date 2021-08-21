/*              P1. 找最大值

在二维数组输出最大值

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cin >> a[i][j];
        }
    }
    int max=-1e9;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
            }
        }
    }
    cout << max << endl;
    return 0;
}