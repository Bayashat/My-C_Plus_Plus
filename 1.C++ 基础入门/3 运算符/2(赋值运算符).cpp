/*
            2. 赋值运算符
            
作用: 用于将表达式的值赋给变量
赋值运算符包括以下几个符合: 
=
+=
-=
*=
/=
%=
*/
#include <iostream>
using namespace std;

int main()
{
    // 第一个 =
    int a = 10;
    a = 100;        
    cout << a << endl; // 100

    // 第二个 +=
    a = 10;
    a += 2;  //等同于 a= a+2      
    cout << a << endl; // 12

    // 第三个 -=
    a = 10;
    a -= 2;  //等同于 a= a-2      
    cout << a << endl; // 8

    // 第四个 *=
    a = 10;
    a *= 2;  //等同于 a= a*2      
    cout << a << endl; // 20

    // 第五个 /=
    a = 10;
    a /= 2;  //等同于 a= a/2      
    cout << a << endl; // 5

    // 第六个 %=
    a = 10;
    a %= 2;  //等同于 a= a%2      
    cout << a << endl; // 0

    return 0;
}