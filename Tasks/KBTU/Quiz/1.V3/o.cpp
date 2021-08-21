#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a,b;
    char c;
    cin >> a >> c >> b;
    if(c=='+')
    {
        cout << a << " " << c << " " << b << " " << "=" << " " << a+b;
        return 0;
    }
    else if(c=='-')
    {
        cout << a << " " << c << " " << b << " " << "=" << " " << a-b;
        return 0;
    }
    else if(c=='*')
    {
        cout << a << " " << c << " " << b << " " << "=" << " " << a*b;
        return 0;
    }
    if(c=='/')
    {
        cout << a << " " << c << " " << b << " " << "=" << " " << a/b;
        return 0;
    }
    
}