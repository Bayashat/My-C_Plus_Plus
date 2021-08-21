#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a,b,c,t;
    cin >> a >> b >> c >> t;
    int x,y;
    if(t<=a)
    {
        cout << t*b;
        return 0;
    }
    else
    {
        cout << ((t-a)*c)+a*b;
    }
    
}