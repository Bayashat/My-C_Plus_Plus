/*      3. 引用做函数参数

作用: 函数传参时，可以利用引用的技术让形参修饰实参.
优点: 可以简化指针修改实参.

*/
#include <iostream>
using namespace std;

    // 交换函数:
//1. 值传递: 形参不会修饰实参
void mySwap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
//2. 地址传递: 形参会修饰实参
void mySwap02(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
//3. 引用传递: 形参会修饰实参
void mySwap03(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    // 1. 值传递
    mySwap01(a, b);
    cout << "a:" << a << " b:" << b << endl; // 10, 20
    // 2. 地址传递
    mySwap02(&a, &b);
    cout << "a:" << a << " b:" << b << endl; // 20, 10
    // 3.引用传递
    mySwap03(a, b);
    cout << "a:" << a << " b:" << b << endl;
    system("pause");
    return 0;
}