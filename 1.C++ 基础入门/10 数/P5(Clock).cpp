/*
        7. Clock :  取自 Quiz_1_v1 - i
        
给定 秒数( < 86399), 需要输出 hh:mm:ss

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int h1 = (n / 3600) / 24;
    int h2 = (n / 3600) % 24;
    int m1 = (n / 60) % 60 / 10;
    int m2 = (n / 60) % 60 % 10;
    int s1 = (n % 60) / 10;
    int s2 = (n % 60) % 10;

    cout << h1 << h2 << ":" << m1 << m2 << ":" << s1 << s2;
    return 0;
}
