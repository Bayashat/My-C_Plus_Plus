#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    int max=-1000000000;

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout << max << " " ;
    return 0;
}