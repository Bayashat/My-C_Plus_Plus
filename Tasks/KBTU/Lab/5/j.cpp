#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i <= s.size(); i++)
    {
        bool ispalindrome = true;
        s.insert(i,"*");
        s[i] = s[s.size()-1-i];

        for(int j=0;j<s.size();j++)
        {
            if(s[j] != s[s.size()-1-j])
            {
                ispalindrome = false;
                break;
            }
        }
        if(ispalindrome==true)
        {
            cout << "YES";
            return 0 ;
        }
        s.erase(i,1);
    }
    cout << "NO";
    return 0;
    
    return 0;
}