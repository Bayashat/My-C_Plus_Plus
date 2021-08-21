//          1.2.算术运算符 - 取模运算     

//作用是 求除后的 余数 （10除3余 1 ）
#include <iostream>
using namespace std;

int main()
{
    int a1 = 10;
    int b1 = 3;

    cout << a1 % b1 << endl;    // 1

    //注意：1.两个数相除除数不可以为0，所以做不了取模运算
    int a2 = 10;
    int b2 = 0;
 
    // cout << a2 % b2 <<endl;


    //注意：2. 两个小数不可以做取模运算
    double d1 = 3.14;
    double d2 = 1.1;

    // cout << d1 % d2 <<endl;


    return 0;
}