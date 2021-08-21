#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];

    int max = -1e9-17;
    int c,d =0;
    
    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j]; 
        }
    }

    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]>max)
            {
                max = a[i][j];
                c =i;
                d=j;
            }
        }
    }
    cout << c+1 << " " << d+1 << endl;
    return 0;
}