#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s ;

    char ans = s[0];
    for(int i=1;i<s.size();i++)
    {
        ans = max(s[i],ans);
    }
    cout << ans ;
    /*
    char max = 'a';
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=max) max = s[i];
    }
    cout << max << endl;
    */
    return 0;
}