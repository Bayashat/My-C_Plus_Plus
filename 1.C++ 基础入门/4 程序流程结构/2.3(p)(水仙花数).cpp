/*
**练习案例：水仙花数

**案例描述： 水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身

例如：1^3 + 5^3+ 3^3 = 153

请利用do...while语句，求出所有3位数中的水仙花数
*/

#include <iostream>
using namespace std;

int main()
{
    // 先打印所以三位数的数字
    int num=100;
    do
    {
        
        // 从所以三位数中找到水花仙数
        int a = 0;  // 个位
        int b = 0;  // 十位
        int c = 0;  // 百位

        a = num % 10 ; // 获取数字的个位
        b = num / 10 % 10 ;  // 获取数字的十位
        c = num / 100 ;  //获取数字的百位

        if(a*a*a + b*b*b +c*c*c == num)  //如果是水仙花数才打印
        {
            cout << num << endl;
        }

        num++;

    } while (num<1000);
    
    return 0;
}