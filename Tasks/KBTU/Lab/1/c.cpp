#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    string s = "";
    cin >> n;
    while(n != 0)
    {
        s += char(n % 2 + 48);  // 先让S存储　转二进制后 的数据
        n /= 2;
    }
    int x = 0;  
    int index = 0; // 2的阶数
    while(s.size() != 0)
    {
        x += pow(2,index) * int(s[s.size()-1] - 48); // 再将其转为10进制数赋值给 x
        index++;
        s.erase(s.size()-1, 1);
        
    }
    cout << x;

    return 0; 
}