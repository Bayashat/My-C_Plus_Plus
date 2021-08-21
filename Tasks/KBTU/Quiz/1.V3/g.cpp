#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    double a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cnt += a[i];
    }
    double x = (double)cnt / (double)n;
    cout << "Average:"
         << " " << x << endl;
    cout << "Sum:"
         << " " << cnt;
    return 0;
}