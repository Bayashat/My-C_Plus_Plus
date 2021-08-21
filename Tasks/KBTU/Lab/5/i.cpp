#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    string s,s2; cin>>s >> s2;
    if(s.size()!=s2.size())
    {
        cout << "NO";
        return 0;
    }
    sort(s.begin(),s.end());
    sort(s2.begin(),s2.end());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s2[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}