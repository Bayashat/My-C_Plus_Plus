/*
        5. 字符串字符串拼接
    
    1. 有了 string 类，我们可以使用+或+=运算符来直接拼接字符串，非常方便

    用+来拼接字符串时，运算符的两边可以都是 string 字符串，也可以是一个 string 字符串和一个C风格的字符串，
    还可以是一个 string 字符串和一个字符数组，或者是一个 string 字符串和一个单独的字符.

    2.  append 函数 - 拼接
语句: append() 
作用: 在字符串的末尾添加字符

    函数原型:

* string& operator+=(const char* str);          //重载+=操作符, 拼接 字符串
* string& operator+=(const char c);             //重载+=操作符, 拼接 字符
* string& operator+=(const string& str);        //重载+=操作符, 拼接 字符串变量
* string& append(const char *s);                //把字符串s连接到当前字符串结尾
* string& append(const char *s, int n);         //把字符串s的前n个字符连接到当前字符串结尾
* string& append(const string &s);              //同operator+=(const string& str)
* string& append(const string &s, int pos, int n); //字符串s中从pos开始的n个字符连接到字符串结尾

*/
#include <iostream>
using namespace std;

void test01()
{
    // 1. 使用 + 和 += 拼接:
    string s1 = "first ";
    string s2 = "second ";
    char *s3 = "third ";
    char s4[] = "fourth ";
    char ch = '@';

    string s5 = s1 + s2; // first second
    string s6 = s1 + s3; // first third
    string s7 = s1 + s4; // first fourth
    string s8 = s1 + ch; // first @

    string str1 = "我爱玩游戏: ";
    string str2 = "LOL DNF";
    str1 += str2;
    cout << str1 << endl; // 我爱玩游戏:LOL DNF

    // 2.使用 append() 拼接:
    string str3 = "I";
    str3.append(" love ");
    cout << str3 << endl; // I love 

    str3.append("game abcde", 4); // 将此字符串的前4个字符拼接给 str3
    cout << str3 << endl; // I love game

    str3.append(str2);
    cout << str3 << endl; // I love gameLOL DNF

    str3 = "I love game ";

    str3.append(str2, 4, 3); // 从下标4位置开始 ，截取3个字符，拼接到字符串末尾
    cout << str3 << endl;  // I love game DNF
}
int main()
{
    test01();

    return 0;
}
// 总结：字符串拼接的重载版本很多，初学阶段记住几种即可