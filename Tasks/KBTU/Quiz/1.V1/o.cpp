#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[4];
    cin >> s;
    
    if(s[0]!=s[3])
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        if(s[1]==s[2])
        {
            cout << "YES"<< endl;
            return 0;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    
    return 0;
}