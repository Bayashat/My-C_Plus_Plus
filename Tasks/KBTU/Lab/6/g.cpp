#include <iostream>
#include<string>
using namespace std;

void RemoveVowels(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a' || s[i]=='o' || s[i]=='e' || s[i]=='i' || s[i]=='u' || s[i]=='A' || s[i]=='O' || s[i]=='E' || s[i]=='I' || s[i]=='U')
        {
            s.erase(i,1);
            i--;
        }
    }
    cout << s ;
}
int main()
{
    string s;
    getline(cin,s);
    RemoveVowels(s);
}
