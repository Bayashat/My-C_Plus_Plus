#include <iostream>
using namespace std; 
  
int main() 
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i<n;i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    for(int i = 0;i<n;i++)
    {
        if(a[i]%10==7) cnt++;
    }
    cout << cnt << endl;
    return 0; 
} 