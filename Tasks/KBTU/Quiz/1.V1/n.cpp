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
    int max = 437;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=max)
        {
            cout << "Crash" << " " << i+1;
            return 0;
        }
    }
    cout << "No crash";
    return 0;
    
}
