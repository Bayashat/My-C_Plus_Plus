#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
    string s; 
    cin>>s;
    int x=0,y=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='F') y++;
        else if(s[i]=='B') y--;
        else if(s[i]=='L') x--;
        else if(s[i]=='R') x++;
    }
   
    vector<char> v;
    while(x!=0)
    {
        if(x<0)
        {
            x++;
            v.push_back('R');
        }
        if(x>0)
        {
            x--;
            v.push_back('L');
        }
    }

    while(y!=0)
    {
        if(y<0)
        {
            y++;
            v.push_back('F');
        }
        if(y>0)
        {
            y--;
            v.push_back('B');
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout << v[i];
    }
    
	return 0;
}