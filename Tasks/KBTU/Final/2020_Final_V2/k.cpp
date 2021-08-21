#include <bits/stdc++.h>
using namespace std;
map<string,string> mp;
bool cmp(const pair <int, int> &a, const pair<int, int> &b)
{
    return(a.second<b.second);
}
int main(void)
{
    int n;
    string a,b;
    cin >> n;
    getchar();
    while(n--)
    {
        cin >> a >> b;
        if(mp.find(a)!=mp.end())
        {
            mp[b]=mp[a];
            mp.erase(a);
        }
        else
        {
            mp[b]=a;
        }
    }
    map<string,string> m;
    map<string,string> ::iterator it;
    cout << mp.size() << endl;
    for(it=mp.begin();it!=mp.end() ; it++)
    {
        string a, b;
        a=it->first;
        b=it->second;
        m[b]=a;
    }
    map<string,string> ::iterator it1;
    for(it1=m.begin();it1!=m.end() ; it1++)
    {
        cout << it1->first << " " << it1->second <<endl;
    }
    return 0;
}