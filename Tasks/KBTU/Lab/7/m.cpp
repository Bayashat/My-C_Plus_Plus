#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ex(int n, int x)
{
    if (x == n)
    {
        cout << n;
        return 0;
    }
    cout << x << " ";
    return ex(n, x + 1);
}
int main()
{
    int n;
    cin >> n;
    ex(n, 1);
    return 0;
}