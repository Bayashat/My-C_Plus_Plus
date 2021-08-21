#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


int f(int x,int y)
{
    if(y==1)
    {
        return 0;
    }
    if(y==2)
    {
        return 1;
    }
    return f(x,y-2) + x*f(x,y-1);
}
int main()
{
    int x,y;
    cin >> x >> y;
    int d = f(x,y);
    if(d<0)
    {
        d = d *(-1);
    }
    cout << d%10;
    
    return 0;
}