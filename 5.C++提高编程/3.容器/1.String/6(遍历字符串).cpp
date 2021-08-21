/*

        6. string字符存取 - 遍历

string 字符串也可以像C风格的字符串一样按照下标来访问其中的每一个字符。string 字符串的起始下标仍是从 0 开始

    string中单个字符存取方式有两种

1.  har& operator[](int n);     //通过[]方式取字符
2. char& at(int n);             //通过at方法获取字符

*/
#include <iostream>
using namespace std;

void test01()
{
    string str = "hello world";

    // 1. 通过 [] 访问单个字符
    for (int i = 0; i < str.size(); i++)  // 也可以使用 str.length() 
    {
        cout << str[i] << " ";
    }
    cout << endl;

    // 2. 通过 at 方式访问单个字符
    for (int i = 0; i < str.size(); i++)
    {
        cout << str.at(i) << " ";
    }
    cout << endl;

    // 修改单个字符:
    str[0] = 'x';
    str.at(1) = 'x';
    cout << str << endl; // xxllo world
}
int main()
{
    test01();

    return 0;
}
// 总结：string字符串中单个字符存取有两种方式，利用 [ ] 或 at