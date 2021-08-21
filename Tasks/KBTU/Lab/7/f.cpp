#include <iostream>
#include <string>
using namespace std;
int Even(string s, int i, int cnt)
{
    if (i == s.size())
        return cnt;
    if (s[i] % 2 == 0)
    {
        cnt++;
    }
    return Even(s, i + 1, cnt);
}
int main()
{
    string s;
    cin >> s;
    cout << Even(s, 0, 0);
}