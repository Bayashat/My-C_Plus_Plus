#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int h1 = (n / 3600) / 24;
    int h2 = (n / 3600) % 24;
    int m1 = (n / 60) % 60 / 10;
    int m2 = (n / 60) % 60 % 10;
    int s1 = (n % 60) / 10;
    int s2 = (n % 60) % 10;

    cout << h1 << h2 << ":" << m1 << m2 << ":" << s1 << s2;
    return 0;
}
