#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a,b,c;
    a = n/3600;
    b=n%3600/60;
    c = n%3600%60;
    cout << a<<":" << b << ":" << c;
    return 0;
}