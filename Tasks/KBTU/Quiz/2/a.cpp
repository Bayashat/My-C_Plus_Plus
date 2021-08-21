//#include <cmath>
#include <iostream>
#include <algorithm>
//#include <vector>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    cout << a[n-1]-a[0]-n+1;
    return 0;
}
/*
    int cnt = 0;
    for(int i = a[0], j = 0; i <= a[n-1]; i++) 
    {
        if(a[j] != i)
        {
            cnt++;
        }
        else
        {
            j++;
        }
    }       
    return cnt;
*/