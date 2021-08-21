/*
        13 插入字符串---insert(pos,str)

insert() 函数可以在 string 字符串中指定的位置“前”插入另一个字符串，它的一种原型为：
    * string& insert (size_t pos, const string& str);

pos 表示要插入的位置，也就是下标 ; str 表示要插入的字符串，它可以是 string 字符串，也可以是C风格的字符串

    函数原型:
* string& insert(int pos, const char* s);       //插入字符串
* string& insert(int pos, const string& str);   //插入字符串
* string& insert(int pos, int n, char c);       //在指定位置插入n个字符c

*/
#include <iostream>
using namespace std;

void test01()
{
    string s1, s2, s3;
    s1 = s2 = "1234567890";
    s3 = "aaa";

    // 1.指定位置插入 字符串变量:
    s1.insert(5, s3);
    cout<< s1 <<endl;   // 12345aaa67890

    // 2. 指定位置插入 字符串:
    s2.insert(5, "bbb");
    cout<< s2 <<endl;   // 12345bbb67890

    // 3. 指定位置插入 n个 char:
    s2.insert(0, 5, 'x');
    cout << s2;         // xxxxx12345bbb67890
    
}

void test02()
{
    string str = "to be question";
    string str2 = "the ";
    string str3 = "or not to be";

    str.insert(6,str2);                 // to be (the ) question          // 表示在第6个位置前插上 srt2
    str.insert(6,str3,3,4);             // to be (not ) the question      // 表示在第6个位置前插上 str 3 的 从第3个位置后的4个字符
    str.insert(10,"that is cool",8);    // to be not (that is ) the question  // 表示在第10个位置前插上 “that is cool”的前8个字符
    str.insert(10,"to be ");            // to be not (to be ) that is the question   // 表示在第10个位置前插上 "to be"
    str.insert(15,1,':');               // to be not to be (:) that is the question   // 表示在第15个位置前插上":" 一遍
}

int main()
{
    test01();
    test02();

    return 0;
}
/*
insert() 函数的第一个参数有越界的可能，如果越界，则会产生运行时异常，
我们将会在《C++异常（Exception）》一章中详细讲解如何捕获这个异常。

更多 insert() 函数的原型和用法请参考：http://www.cplusplus.com/reference/string/string/insert/
*/