#include <iostream>
using namespace std;

int main () 
{
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }

    int x,y;
    long long s = 0;
    cout << "coordinates of min elements:" << endl;
    for(int j=0;j<m;j++)
    {
        int min= 1e9+1;
        for(int i=0;i<n;i++)
        {
            if(a[i][j]<min)
            {
                min= a[i][j];
                x = i;
                y = j;
            }
        }
        s += min;
        cout << x+1 << ";" << y+1 << endl;
    }
    cout << "Their sum:" << endl;
    cout << s << endl;
    return 0;
}