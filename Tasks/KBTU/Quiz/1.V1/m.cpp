#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    while (n != 0)
    {
        s = char(n % 10 + 48) + s;
        n /= 10;
    }
    /*
    string s = "";
    cin >> a;
	stringstream ss;
	ss<<a;
	ss>>s;
    */

    while (s.length() != 4)
    {
        s = '0' + s;
    }
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
    {
        cout << "12/09/" << s;
    }
    else
    {
        cout << "13/09/" << s;
    }

    return 0;
}