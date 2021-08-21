//      6.字符串型 - string

//作用: 用于表示一串字符
//有两种风格的字符串型

#include <iostream>
using namespace std;
#include <string>  //用C++风格字符串时，要包含这个头文件

int main()
{
    // 1. C风格字符串
    /* 注意事项 :  1.等号后面 要用双引号 包含起来 字符串
                  2.变量名后 正括号不能忘 []

        语法 : char 变量名[] = "字符串值"
    */

    char str[] = "hello world";  //现在str就代表了hello world,以后想表示heelo world只需写str就可。
    cout << str << endl;



    // 2. C++风格字符串
    // 注意事项 ：1.包含一个头文件 #include <string>
    // 语法：string 变量名 = "字符串值"

    string str2 = "hello world";
    cout << str2 << endl;  //同样，str2 代表了hello world

    return 0;
}