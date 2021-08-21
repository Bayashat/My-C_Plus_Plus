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
