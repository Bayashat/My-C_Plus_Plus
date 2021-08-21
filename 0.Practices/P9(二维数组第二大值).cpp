/*              P2. 第二大值

在二维数组输出第二大的数字

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

    int max,second=-1e9-1;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(max<a[i][j])
            {
                second = max;
                max=a[i][j];
            }
            else if(a[i][j] > second && a[i][j] != max)
            {
                second = a[i][j];
            }
       }
    }

    if(second == -1e9 - 1) cout << 0;
    else cout << second << endl;
    return 0;
}