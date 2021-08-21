#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n*2-1];

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j <= n - 1 -i; j++)
        {
            cout << '.';
        }
        for(int j = 0; j < i*2-1; j++)
        {
            cout << "*";
        }
        for(int j = 0; j <= n - 1 -i; j++)
        {
            cout << '.';
        }
        cout << endl;
    }

    return 0;
}