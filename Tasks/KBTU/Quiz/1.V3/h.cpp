#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(abs(a-c)==abs(b-d))
    {
        cout << "Won";
    }
    else
    {
        cout << "Lose";
    }
    
    return 0;
}