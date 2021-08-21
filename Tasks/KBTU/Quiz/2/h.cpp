#include <iostream>
#include <string>
using namespace std;

int main()
{
    char c;
    string s;
    cin >> c >> s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==c)
        {
            s.erase(i,1);
        }
    }
    cout << s;
	return 0;
}
