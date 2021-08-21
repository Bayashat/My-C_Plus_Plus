#include <iostream>
#include<string>
#include <algorithm>
using namespace std;
bool Cheater(int *a,int n,int x,int i)
{
    if(i==n-1) return true;
    if(a[i+1]-a[i]<=x)
    {
        return false;
    }
    return Cheater(a,n,x,i+1);
}
int main()
{
    int n,x;
    cin >> n >> x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    
    Cheater(a,n,x,0) ? cout << "no" : cout << "cheater"; 
}