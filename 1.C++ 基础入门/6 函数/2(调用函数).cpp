/*           2 函数的调用

功能：使用定义好的函数
语法： 函数名（参数）
*/
#include <iostream>
using namespace std;

// 1.先定义一个加法函数：
int add(int num1, int num2)       // 函数定义的时候，num1 和 num2 并没有真实数据，它只是一个形式上的参数，简称形参。
                                  // 当调用函数时，实参的值会传递给形参。
{
    int sum = num1 + num2 ;
    return sum;
}
// 2. 在 main 函数中调用add函数
int main()
{
    // a 和 b 实际参数，简称实参
    int a = 10;
    int b = 20;
     // 函数调用语法： 函数名(参数)
    int c = add(a,b);
    cout << "c= " << c << endl;

    return 0;
}
