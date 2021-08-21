/*  
        1. 函数默认参数
 在C++中，函数的形参列表中的形参是可以有默认值的.

 语法: 返回值类型 函数名 (参数 = 默认值){}

*/
#include <iostream>
using namespace std;

// 如果我们自己传入数据,就用自己的数据,如果没有,那么用默认值.
int func(int a, int b = 10, int c = 10)
{
    return a + b + c;
}

//  注意事项:
// 1. 如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值

int func2(int a, int b = 10, int c = 20, int d = 30) // 这儿b有默认值,那么 c 和 d 都必须有默认值.
{
    return a + b;
}

// 2. 如果函数声明有默认值，函数实现的时候就不能有默认参数
// 声明和实现只能有一个有默认参数.
int fun3(int a = 10, int b = 10);

int func3(int a = 30, int b = 40)
{
    return a + b;
}
int main()
{
    cout << "ret = " << func(20, 20) << endl; // 50
    cout << "ret = " << func(100) << endl; // 120

    cout << func3(10, 20); // 报错.

    return 0;
}