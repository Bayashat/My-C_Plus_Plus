#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    char t;
    int x;
    cin >> s >> t >> x;

    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]==t)
        {
            cnt++;
        }
    }
    if(cnt==x)
    {
        cout << "YES";
    }
    else cout << "NO";
    
    return 0;
}