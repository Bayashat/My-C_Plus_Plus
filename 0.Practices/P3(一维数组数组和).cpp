/*        P3. 数组的和

需要在数组里输出总数目的和

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}