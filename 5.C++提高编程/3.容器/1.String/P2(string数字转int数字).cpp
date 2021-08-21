/*
        P2 string 数字 转 int 数字
*/
#include <iostream>
using namespace std;

int toInt(string s)
{
    int x = 0;
    int k = 1;
    while(s.size() != 0)
    {
        int d = int(s[s.size()-1] - 48);
        
        x += d * k;
        k *= 10;

        s.erase(s.size()-1, 1);
    }
    return x;
}
int main()
{  
    string s;   // 17
    cin >> s;
    int n = toInt(s);
    cout << n;  // 17

    return 0;
}