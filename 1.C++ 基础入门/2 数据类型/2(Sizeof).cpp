//      2.sizeof关键字

//作用：利用sizeof关键字可以统计数据类型所占内存大小
#include <iostream>
using namespace std;

int main()
{

    //整型：short(2) int(4) long(4) long long(8) 字节
    // 语法：sizeof(数据类型/变量)

    short A = 10;

    cout << "short's size is " << sizeof(short) << endl;    // 2

    int B =10;
    cout << "int's size is " << sizeof(B) << endl;  // 4

    long C =10;
    cout << "long's size is " << sizeof(long) << endl;  // 4

    long long D =10;
    cout << "long long's size is " << sizeof(D) << endl;    // 8

    return 0;
}