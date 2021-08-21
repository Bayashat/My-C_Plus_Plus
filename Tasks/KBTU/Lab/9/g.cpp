#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;


void test()
{
    string s;
    cin >> s;
    stack<char> q;
    for(int i=0;i<s.size();i++)
    {
        if(q.empty()) 
        {
            q.push(s[i]);
        }
        else if(s[i]=='1' && q.top()=='1')
        {
            q.pop();
        }
        else
        {
            q.push(s[i]);
        }  
    }
    string ans = "";
    while(!q.empty())
    {
        ans = q.top()+ans;
        q.pop();
    }
    cout << ans;
}
int main()
{
    test();
    return 0;
}
