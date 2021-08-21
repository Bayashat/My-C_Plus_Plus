#include <iostream>
#include <cstring>
using namespace std;

bool ff(string s)
{
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(s[i]==s[j])
            {
                return false;
            }
        }
    }
    return true;
}
string f(string s)
{
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(s[i]==s[j])
            {
                cout << s[i] ;
                s.erase(i,1);
                return s;
            }
        }
    }
}
int main()
{
    string s; cin>>s; 
    while(ff(s)==false)
    {
        s = f(s);
    }
	return 0;
}