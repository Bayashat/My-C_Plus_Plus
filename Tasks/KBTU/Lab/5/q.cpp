#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s,t;
    cin >> s >> t ;
    string origin = s;
    while(s.size() < t.size())
    {
        s += origin;
    }
    if(s==t) cout << "YES";
    else cout << "NO";
    return 0;
}