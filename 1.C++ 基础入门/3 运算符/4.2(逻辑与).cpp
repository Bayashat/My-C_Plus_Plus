//      4.逻辑运算符 -  与(&&)
//两个条件都为真，结果才为真 (要同时满足两个条件)
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    cout << (a && b) << endl;  //两个都是真，则为真

    a=0;
    b=10;
    cout << (a && b) << endl;  //一假一真，还是假。

    a=0;
    b=0;
    cout << (a && b) << endl;  //两个都是假，则假

    return 0;
}
//同真为真，其余为假