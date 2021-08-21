/*
        2 string构造函数
构造函数原型: 

 1. string();                     //创建一个空的字符串 例如: string str;
 2. string s = "字符串"           // 使用 = 创建
 3. string s("字符串")            // 使用括号创建
 3. string(const char* s);        //使用字符串s初始化
 4. string(const string& str);    //使用一个string对象初始化另一个string对象
 5. string(int n, char c);        //使用n个字符c初始化

*/
#include <iostream>
using namespace std;
#include <string>

void test01()
{
    // 1. 创建空字符串，调用无参构造函数
    string s1; 
    cout << s1 << endl; // 

    // 2. 使用 = 号:
    string s2 = "hello";
    cout << s2 << endl; // hello

    // 3. 使用 () 号:
    string s3("Bayashat");
    cout << s3 << endl; // Bayashat
    
    // 4.
    const char *str = "hello world";
    string s4(str); //把c_string转换成了string
    cout << s4 << endl;    // "hello world"

    // 5.调用拷贝构造函数
    string s5(s2); 
    cout << s5 << endl;    // "hello world"

    // 6.使用n个字符c初始化
    string s6(10, 'a');
    cout << s6 << endl;    // "aaaaaaaaaa"
}
int main()
{
    test01();

    return 0;
}
// 总结: string的多种构造方式没有可比性，灵活使用即可