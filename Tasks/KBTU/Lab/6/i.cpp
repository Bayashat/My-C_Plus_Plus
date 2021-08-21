#include <iostream>
#include <string>
using namespace std;

string CapitalEven(string s)
{
    for (int i = 0; i < s.size(); i += 2)
    {
        if (s[i] <= 'z' && s[i] >= 'a') // s[i] = toupper(s[i]);
        {
            s[i] -= 32; 
        }
    }
    return s;
}
int main()
{
    string s;
    cin >> s;
    cout << CapitalEven(s);
}
