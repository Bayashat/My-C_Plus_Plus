#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ex(string s,int cnt,int i)
{  
    if(i==s.size())
    {
        return cnt;
    }
    cnt += s[i]-48;
    return ex(s,cnt,i=i+1);
}
int main()
{
    string s;
    cin >> s;
    cout << ex(s,0,0);
    
    return 0;
}