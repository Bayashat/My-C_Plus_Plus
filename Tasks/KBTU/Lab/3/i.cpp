#include <iostream>
using namespace std;

int main()
{
    int n,l,r;
    cin >> n >> l >>r;

    int arr[n];

    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
// variant-1: 
/*
    for(int i=1;i<l;i++)
    {
        cout << arr[i] << ' ' ;
    }

    for(int i=r;i>=l;i--)
    {
        cout << arr[i] << ' ' ;
    }

    for(int i=r+1;i<=n;i++)
    {
        cout << arr[i] << ' ' ;
    }
*/
// variant-2:
    for(int i = l; i <= (r-l) / 2; i++)
    {
        swap(arr[l+i], arr[r -i]);
    } 
    for(int i = 1; i <= n; i++)
    {
        cout << arr[i] << ' ' ;
    }
    
    return 0;
}