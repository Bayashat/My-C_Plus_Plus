#include <iostream>
#include<string>
using namespace std;

void sum(string s)
{
    int cnt =0;
    for(int i=0;i<s.size();i++)
    {
        cnt += (s[i]-'0');
    }
    cout << cnt << endl;
}
int main()
{
    string s;
    cin >> s;
    sum(s);
}