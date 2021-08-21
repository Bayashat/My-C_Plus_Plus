#include <iostream>
using namespace std;

int main()
{
    int x, y = 1, cnt = 0;
    cin >> x;
    while (y != 0)
    {
        cin >> y;
        if (y > x)
        {
            cnt++;
        }
        x = y;
    }

    cout << cnt;

    return 0;
}