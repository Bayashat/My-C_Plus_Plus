/*              6. 函数的声明

作用： 告诉编译器函数名称及如何调用函数。函数的实际主体可以单独定义。

*  函数的声明可以多次，但是函数定义只能有一次
*/
#include <iostream>
using namespace std;

    // 比较函数：实现两个整型数字进行比较，返回较大的值

    // 提前告诉编译器函数的存在，可以利用函数的声明
    // 函数的声明：
    int max(int a, int b);      // 有了声明后就可以把函数写在后面了

int main()
{

    int a = 10;
    int b = 20;
    
    cout << max(a,b) << endl;   // 20


    return 0;
}

int max(int a, int b)
{
    return a > b ? a : b;
}
