#include <iostream>
  
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
    int max = -1, x = 0;
    int min = 1e9+17, y = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)  max = a[i],x = i;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)  min = a[i],y=i;
    }
    a[x]= a[y];

    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }

    return 0; 
} 