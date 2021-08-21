#include <iostream>
#include <sstream>
using namespace std;

int MaximiumDigit(string n, int i, int max)
{
    if ((n[i] - '0') > max)
        max = n[i] - '0';
    if (i == n.size())
        return max;
    return MaximiumDigit(n, i + 1, max);
}
int main()
{
    string x;
    cin >> x;
    cout << MaximiumDigit(x, 0, -1);

    return 0;
}