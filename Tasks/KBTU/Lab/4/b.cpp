#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    int max = -1e9-1, second = -1e9-1;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
            if(a[i][j]>max)
            {
                second = max;
                max = a[i][j];
            }
            else if(a[i][j]<max && a[i][j]>second)
            {
                second = a[i][j];
            }
        }
    }
    if(second==-1e9-1)
    {
        cout << 0;
    }
    else cout << second; 

    return 0;
}