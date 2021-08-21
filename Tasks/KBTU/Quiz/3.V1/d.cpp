#include<bits/stdc++.h>
using namespace std;

bool isEqual(string s,string s2)
{
    if(s.size()!=s2.size())
    {
        return false;
    }
    for(int i=0;i<s.size();i++)
    {
        s[i] = tolower(s[i]);
        s2[i] = tolower(s2[i]);

        if(s[i]=='b') s[i] = 'p';
        if(s[i]=='i') s[i] = 'e';

        if(s2[i]=='b') s2[i] = 'p';
        if(s2[i]=='i') s2[i] = 'e';
    }
    sort(s.begin(),s.end());
    sort(s2.begin(),s2.end());

    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s2[i]) return false;
    }
    return true;
}

int main()
{
    int n; cin>>n;
    string a[n];
    int u=0;
    for(int i=0;i<n;i++)
    {
        string s,s2;
        cin>>s>>s2;
        
        if(isEqual(s,s2)) 
        {
            a[u] = "Yes";
            u++;
        }
        else
        {    
            a[u] = "No";
            u++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout << a[i] << endl;
    }
    
    
    return 0;
}