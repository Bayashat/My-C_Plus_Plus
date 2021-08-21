//      4.字符型 - char

//作用：字符型变量用于显示单个字符
//C和C++中字符型变量只占用1个字节。
//字符型变量并不是把字符本身放到内存中存储, 而是将对应的ASCII编码放入到存储单元

#include <iostream>
using namespace std;

int main()
{
    // 1.字符型变量创建方式
    //语法：char 变量名 = '初始值'
    
    char ch = 'a';
    cout << ch << endl; // a

    // 2.字符型变量所占内存大小 (1 byte)
    cout << "charch's size is " << sizeof(ch) <<endl; // 1

    // 3.字符型变量常见错误
    char ch2 = "b";  //创建字符型变量时候，要用单引号
    char ch2 = 'abcdef'; //创建字符型变量时候，单引号内只能有一个字符
 
    // 4.查看字符型变量对应ASCII编码
    // a --- 97
    // A --- 65
    cout << (int)ch << endl;    // 97

    // 5. char 型数字 转换 整形数字:
    char c = '5';
    int x = int(c - 48); // 5

    // 6. 整形数字转 char型数字:
    int x = 56;
    string s = "";
    while(x != 0)
    {
        s = char(x%10 + 48) + s;
        x /= 10;
    }
    cout << s;  // 56
    
    return 0;
}