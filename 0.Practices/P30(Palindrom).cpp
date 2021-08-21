/*
        8. Palindrome:      取自 Lab_5 - D

检测给定字符串是否是 Palindrome(回文)?
*/
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    while(s.size() != 0)
    {
        if(s[0] != s[s.size()-1])
        {
            cout << "NO";
            return 0;
        }
        s.erase(s.size()-1,1);      
        s.erase(0,1);
    }
    cout << "YES";
    return 0;
}
