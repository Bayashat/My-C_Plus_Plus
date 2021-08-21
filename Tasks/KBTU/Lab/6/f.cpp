#include <iostream>
#include<string>
using namespace std;

bool isValid(string s,int n)
{
    int cnt = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0' && s[i] <= '9')  // if(isdigit(s[i]))
        {
            cnt ++;
        }
    }
    return cnt >= n;
}
int main()
{
    string s;
    int n;
    cin >> s >> n;
    cout << (isValid(s,n)? "YES" : "NO");
}
