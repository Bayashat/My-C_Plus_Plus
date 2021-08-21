/*       8  函数传递:

有三种方法:
1. 值传递:
    所谓值传递，就是函数调用时实参将数值传入给形参
    值传递时，如果形参发生改变，并不会影响实参 
2. 地址传递:
    所谓地址传递，就是函数调用时实参将数值的地址传入给形参.
    地址传递时，如果形参发生改变，会间接影响实参
3. 引用传递:
    函数传参时, 可以利用引用的技术让形参修饰实参
*/
#include <iostream>
using namespace std;

//  1.值传递: 
// 定义一个函数: 让其给每个数加10
void test01(int num1, int num2)       // 如果函数不需要返回值，声明的时候可以写 void 
{
    num1 += 10;
    num2 += 10;

    //return;   当不需要返回值时，可以不写 return 
}
//  2. 地址传递:
void test02(int *num1, int *num2)
{   
    *num1 += 10;
    *num2 += 10; 
}
// 3.引用传递:
void test03(int &num1, int &num2)
{
    num1 += 10;
    num2 += 10;
}
int main()
{
    int a = 1;
    int b = 2;

    // 1. 值传递并没有影响实参
    test01(a,b);
    cout << a << " " << b;  // 1 2 

    // 2.地址传递影响了实参:
    test02(&a, &b);
    cout << a << " " << b;  // 11 12

    // 3. 引用传递同样会影响实参:
    test03(a, b);
    cout << a << " " << b;  // 21 22

    return 0;
}
/* 总结: 
    1. 值传递时，形参是修饰不了实参的
    2. 地址传递时, 形参会影响实参.
    3. 引用传递时, 形参会影响实参.
*/