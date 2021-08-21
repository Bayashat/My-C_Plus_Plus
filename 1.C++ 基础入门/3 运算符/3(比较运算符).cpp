/*
        3. 比较运算符
    作用: 用于表达式的比较，并返回一个真值或假值
    比较运算符有以下符合: 
==      相当于
!=      不等于
<       小于
>       大于
<=      小于等于
>=      大于等于
*/
#include <iostream>
using namespace std;

int main()
{
    // 1. ==
    int a =10;
    int b = 20;
    cout << (a == b) << endl;    //加个小括号是为了优先运算括号里面的，否则系统不认
                                 //结果是0，因为这是一个假值
    // 2. ！=
    cout << (a != b) << endl;    //结果是1，因为这是一个真值

    // 3. <
    cout << (a < b) << endl;    // 1

    // 4. >
    cout << (a > b) << endl;    // 0

    // 5. <=
    cout << (a <= b) << endl;   // 1

    // 6. >=
    cout << (a >= b) << endl;   // 0

    return 0;
}