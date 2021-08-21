#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s[n];
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> a[i];
    }
    sort(a, a + n);
    sort(s, s + n);
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << " " << a[i] << endl;
    }
}