#include <iostream>
using namespace std;
void readArray(int a[][201],int n,int m, int x)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
}
void HighQualityMatrix(int a[][201], int n, int m, int x)
{
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == x)
            {
                cnt++;
                break;
            }
        }
    }
    cout << cnt;
    /*
            bool has;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            has = false;
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==x)
                {
                    has = true;
                    break;
                }
            }
            if(has) cnt++;
        }
        cout << cnt;
    */
}
int main()
{
    int n,m,x;
    cin >> n >> m >> x;
    int a[n][201];
    readArray(a, n, m, x);
    HighQualityMatrix(a, n, m, x);
    return 0;
}
