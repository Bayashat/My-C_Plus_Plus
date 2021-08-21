#include <iostream>
using namespace std;

void readArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int number(int *a, int b, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    readArray(a, n);
    int l;
    cin >> l;
    number(a, l, n);
    return 0;
}
