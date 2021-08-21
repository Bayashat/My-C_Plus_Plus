#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s ;

    int sum = 0,sum2=0;
    for(int j=0;j<s.size();j=j+2)
    {
        sum += s[j];
    }
    for(int j=1;j<s.size();j=j+2)
    {
        sum2 += s[j];
    }
    
    if(sum==sum2)
        cout << "YES" ;
    else
        cout << "NO";
    return 0;
}