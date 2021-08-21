#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a,b,c,cnt=0;
    cin >> a >> b >> c;
    a *= 100;
    c *= 100;
    while(a<c)
    {
        a = ((a*b)/100)+a;
        cnt++;
    }
    cout << cnt;
    return 0;
}