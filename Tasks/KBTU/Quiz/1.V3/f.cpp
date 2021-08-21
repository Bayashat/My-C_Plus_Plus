#include <iostream>
using namespace std;

int mdin()
{
    int d, c, p, n;
    cin >> d >> c >> p >> n;

    d = d * 100;
    int pnt = d + c;

    int x = p * n;

    cout << (pnt - x) / 100 << " " << (pnt - x) % 100;
    return 0;
}