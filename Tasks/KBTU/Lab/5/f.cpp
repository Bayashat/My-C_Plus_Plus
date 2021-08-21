#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int l,r;
    cin >> s >> l >> r ;
    
    for( l; l <= r; l++)
    {
        cout << s[l];
    }
    return 0;
}