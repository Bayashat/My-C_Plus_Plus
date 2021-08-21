#include <iostream>
using namespace std;

int main()
{
    int n,m,max;
    cin >> n >> m;

    int arr[n];
    for(int i = 1;i<=n;i++)
    {
        cin >> arr[i];
    }

    
    for(int i = 1;i<=n;i++)
    {
        if(arr[i] <= m)
        {
            max = i;
        }
    }
    cout << max << endl;
    return 0;
}