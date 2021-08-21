/*          3. 常量
 ** 常量是不可修改的
 作用：用于记录程序中不可更改的数据
有2种常量定义方式:

    * 1. #define ----宏常量, 
    通常在文件上方定义，表示一个常量

      语法是：#define 常量名 常量值

    * 2.  const----修饰的变量, 
    通常在变量定义前加关键字const, 修饰该变量为常量, 不可修改

    语法是: const 数据类型 常量名 = 常量值

*/
#include <iostream> 
using namespace std;
    // 常量的定义方式
    // 第1种: 宏常量-#define:
    
#define Day 7

int main()
{
    cout << "one week has: " << Day << " day" << endl; // 7

    // 第二种: const 修饰常量:
    const int month = 12;

    cout << "one year has " << month << " months" << endl; // 12

    return 0;
}