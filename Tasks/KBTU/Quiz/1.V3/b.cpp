#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b, c, d;
    a = n / 100000;
    b = n / 10000 % 10;
    c = n / 10 % 10;
    d = n % 10;
    //cout << a << b << c << d;
    if (a + b == c + d)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}