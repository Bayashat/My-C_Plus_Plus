#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    int aa[10000], bb[10000];
    for (int i = 0; i < 10000; i++)
    {
        aa[i] = 0;
        bb[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        aa[d]++;
    }
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        bb[s]++;
    }

    int cnt = 0;
    for (int i = 0; i < 10000; i++)
    {
        if ((aa[i] != 0 && bb[i] != 0))
        {
            cnt += min(aa[i], bb[i]);
        }
    }
    cout << cnt;
    return 0;
}