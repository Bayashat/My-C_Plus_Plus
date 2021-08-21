/*          1. 转二进制:  部分取自 Lab_1 - C
*/
#include <iostream>
#include <cmath>
using namespace std;

    // 1. 将 十进制数字 转换为 二进制输出:
string toBianry1(int n)
{
    string s;
    while(n != 0)
    {
        s = char(n%2 + 48) + s;
        n /= 2;
    }
    return s;
}

    // 2. 将二进制数字(0011) 转 十进制数字:
int toBinary2(string s)
{
    int Decimal = 0; // 最后的十进制数
    int index = 0; // 2的阶数
    while(s.size() != 0)
    {
        // 0011 转十进制:  (2^0 * 1) + (2^1 * 1) + (2^2 * 0) + (2^3 * 0)
        Decimal += pow(2,index) * int(s[s.size()-1] - 48); // 从二进制数的末尾开始, 每一个数字依次乘2的阶数
        index++;
        s.erase(s.size()-1, 1); // 然后删掉以乘过的末尾数
    }
    return Decimal;

}
    // 3. 将 十进制数字 转换为 二进制, 将其顺序反转, 再转成 十进制 :
int toBinary3(int n)
{
    // 假设 n = 12
    string s;
    while(n != 0)
    {
        s += char(n%2 + 48); // 让 S +=, 会让其以反顺序转 二进制
        n /= 2;
    }
    // 那么 s = 0011

    int Decimal = 0; // 最后的十进制数
    int index = 0; // 2的阶数
    while(s.size() != 0)
    {
        // 0011 转十进制:  (2^0 * 1) + (2^1 * 1) + (2^2 * 0) + (2^3 * 0)
        Decimal += pow(2,index) * int(s[s.size()-1] - 48); // 从二进制数的末尾开始, 每一个数字依次乘2的阶数
        index++;
        s.erase(s.size()-1, 1);
        
    }
    return Decimal;
}
int main()
{
    int n = 12;
    // 1. 将 十进制数字 转换为 二进制输出:
    cout << toBianry1(n) << endl;   // 1100

    // 2. 将十进制数字(0011) 转 十进制数字:
    string s = "0011";
    cout << toBinary2(s) << endl;   // 3

    // 3.将 十进制数字 转换为 二进制, 将其顺序反转后 再转成 十进制:
    int m = 12;
    cout << toBinary3(m); // 3

    return 0;
}