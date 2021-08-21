/*          P1. 最大值

在数组里找并输出最大值

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    int max = -1e9; // -1 * 10^9

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max << " ";
    return 0;
}