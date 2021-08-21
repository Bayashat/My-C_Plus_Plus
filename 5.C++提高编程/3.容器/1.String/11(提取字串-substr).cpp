/*

            11 string子串获取 - substr()函数
作用: 提取指定的子字符串
 
substr() 函数用于从 string 字符串中提取子字符串，它的原型为：

* string substr (size_t pos = 0, size_t len = npos) const : pos 为要提取的子字符串的起始下标，len 为要提取的子字符串的长度。

语句 ： 字符串名.substr(num1,num2) 
        .substr(num1,num2) ---- : 提取从num1后的num2个字符 的字符串
        .substr(num)       ---- :  若括号里至写一个数字，则代表从此数字开始提取到最后

* size_t 是从0开始的正数的整数数据类型. 是节省内存的方法

* 注意: 如果不进行赋值操作的话 原str 并不会改变
*/

#include <iostream>
using namespace std;

void test01()
{
    // 1.基本运用:
    string s1 = "first second third";
    string sub_str = s1.substr(6, 6);   // 从下标为6的位置开始提取6个字串
    cout<< sub_str <<endl; // second

    string str = "ABCD" ;

    cout << str.substr(2);    // 从第2个位置开始提取子字符串 : CD
    cout << str << endl;    // "ABCD" 

    // 2.实用操作:
    string email = "bayashat@sina.com";

    // 从邮件地址中 获取 用户名信息
    int pos = email.find("@"); // 8

    string username = email.substr(0, pos);
    cout << "username: " << username << endl; // bayashat
}
int main()
{
    test01();

    return 0;
}
/*   总结: 
    1. 灵活的运用求子串功能，可以在实际开发中获取有效的信息
    2. 系统对 substr() 参数的处理和 erase() 类似：
        如果 pos 越界，会抛出异常；
        如果 len 越界，会提取从 pos 到字符串结尾处的所有字符。
*/