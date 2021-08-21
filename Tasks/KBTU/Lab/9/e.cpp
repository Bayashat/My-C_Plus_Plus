#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string,int> m;  
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    
    int cnt=0;
    for(map<string,int> :: iterator it=m.begin();it!=m.end();it++)
    {
        if((*it).second==3)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
