#include <iostream>
using namespace std;

int main()
{
    string s[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int n = sizeof(s) / sizeof(s[0]);
    string ss;
    cin >> ss;
    for(int i = 0; i < n; i++)
    {
        if(ss == s[i])
        {
            cout << n-i;
        }
    }
    return 0;
}