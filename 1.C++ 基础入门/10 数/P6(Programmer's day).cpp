/*
        8. Prorammer's day  : 取自 Quiz_1_v1 - M
        
每年的第 255 天 被定为 Prorammer's day
给定年份,需要以 dd/mm/year 的形式输出这一天
Leap year 是
    * 年份可以整除400
    * 年份可以整除 4, 但不能整除100
 比如: 2000 : 12/09/2000
        1   : 13/09/0001
*/
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