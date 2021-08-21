#include <iostream>
#include <algorithm>
using namespace std;

bool test01(string s, int n)
{
    int cnt = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(cnt == n)
        {
            return true;
        }
        if(isdigit(s[i]))   // if(s[i] >= '0' && s[i] <= '9)
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }
    }
    return false;
}
int main()
{
    string s;
    int n;
    cin >> s >> n;
    cout << (test01(s,n) ? "Valid" : "Not valid");
    return 0;
}
