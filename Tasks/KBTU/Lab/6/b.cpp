#include <iostream>
#include <cmath>

using namespace std;

void inputArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void solve(int *a, int *b, int *d, int n)
{
    for (int i = 0; i < n; i++)
    {
        d[i] = abs(a[i] - b[i]);
    }
}

void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n], b[n], d[n];

    inputArray(a, n);
    inputArray(b, n);

    solve(a, b, d, n);

    print(d, n);

    return 0;
}