//      1.1 算术运算符 - 加减乘除运算

// 算数运算符用来处理四则运算

#include <iostream>
using namespace std;

int main()
{
    // 1.加减乘除
    int a1 = 10;
    int b1 = 3;

    cout << a1 + b1 << endl;    // 13
    cout << a1 - b1 << endl;    // 7    
    cout << a1 * b1 << endl;    // 30
    cout << a1 / b1 << endl;   // 3  因为这是整型，所以结果不会是有小数

    // 2.两个小数可以相除：
    double d1 = 0.5;
    double d2 = 0.25;
    cout << d1 / d2 << endl;    // 2

    // 3. 怎么样让两个整数相除,结果为 小数:
    int a = 5;
    int b = 2;
    double num = a / b;
    cout << num ;  // 2  : 为什么不是 2.5 呢, 因为 整型与整型相除的话结果是整形.

    // 解决方法1是 强制转换其中之一为 浮点型:
    double num = (double)a / b;
    cout << num; // 2.5

    // 解决方法2是 将其中之一乘以 1.0:
    double num = a * 1.0 / b;
    cout << num ;  // 2 .5

    return 0;
}