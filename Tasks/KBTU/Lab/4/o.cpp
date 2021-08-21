#include <iostream>
using namespace std;

int main()
{
    int n,max = -1e9-1,x=0;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
            if(i==j)
            {
                if(a[i][j]>max)
                {
                    max = a[i][j];
                    x  =i+1;
                }
            }
        }
    }
    cout << "Maximum element is:"  << " " << max << " " <<  "with coordinates:"  << " " << x << ";" << x;

    return 0;
    }