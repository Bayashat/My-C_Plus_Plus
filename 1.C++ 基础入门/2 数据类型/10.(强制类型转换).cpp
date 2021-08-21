//          10.强制将变量的数据类型转换

// 语法: (类型名)变量或数值
#include <iostream>
using  namespace std;

int main()
{
    int num1 = 5;
    int num2 = 2;
    double num3 = num1 / num2;
    cout << num3 ;  // 2  
    // 为什么不是 2.5 呢， 因为 整型与整型相除的话结果是整形.

    // 解决方法1是 强制转换其中之一为 浮点型:
    double num3 = (double)num1 / num2;
    cout << num3; // 2.5

    // 解决方法2是 将其中之一乘以 1.0:
    double num3 = num1 * 1.0 / num2;
    cout << num3 ;  // 2 .5
    
    return 0;
}