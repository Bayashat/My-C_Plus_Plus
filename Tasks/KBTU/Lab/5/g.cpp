#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s,t;
    cin >> s >> t ;
    for(int i = 0;i<s.size();i++)
    {
        if(s[i]!=t[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    /* 第二种方式：
    if(s == t)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    */
    return 0;
}