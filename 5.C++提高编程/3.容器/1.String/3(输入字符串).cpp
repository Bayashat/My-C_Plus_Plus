/*  
        3. 输入字符串:

    1. cin : 缺点是无法输入1个以上字符串,在识别到 空格 时停止输入.

    2. getline()函数:        
    语句: istream& getline (istream& is, string& str)
    作用是: 接受一个字符串，可以接收空格并输出，需包含“#include<string>”

    is：表示一个输入流，例如cin。
    str：string类型的引用，用来存储输入流中的流信息.
    
*/
#include <iostream>
using namespace std;

int main()
{
    // 1. 使用 cin
    string s;  // test test02
    cin >> s;
    cout << s << endl;  // test

    // 2.使用 getline()
    string x; // test test02
    getline(cin,x);     
    cout << x << endl; // test test02

    return 0;
}