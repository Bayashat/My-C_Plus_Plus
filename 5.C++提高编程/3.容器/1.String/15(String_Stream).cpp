/*          15. stringstream 语句

● stringstream是一个C++底下的类别, 专门拿來读取字串并且处理，很多时候拿來做字串的切割，或者是int跟string类别之間的转换

● 需要包含头文件:
    #include <sstream>

● 把int形态的数字转成string:
    1. 此时的stringstream就像个桥梁，可以负责当中间转换的部分。-
    2. stringstream提供了 “>> ” 与 “<<” 运算子來读取或写入:
    3. << 代表写入stringstream中，>>代表从stringstream拿出

● 针对stringstream类别的初始化: 
这边要提到一点就是要重复使用一个stringstream的情況，因為宣告stringstream类别的時候其實蛮消耗CPU的时间，
在解题目以及应用的時候不太建议重复宣告，而是使用完之后就初始化再次利用
基本就是要以下这兩行:
     ////////基本的初始化stringstream
    stringstream s1;
    s1.str("");
    s1.clear();

這邊有個重點就是s1.str("");    s1.clear();
這兩行基本上缺一不可，缺少了任一行就會導致某些情況下的錯誤。
*/

#include <sstream>
#include <iostream>
#include <string>
using namespace std;

void test00()
{
    // 0. 输出 striing_stream 中的数据:
    stringstream ss;
    int x = 5;
    ss << x;
    cout << ss.str() << endl;   // 5
}
    // 1. int 转 string:
void test01()
{
    stringstream s1; // 创建  sstream 对象

    int number = 1234;
    string output;  //要把number转成字串型的容器
    
    s1<<number; //将以int类型的number放入我们的stringstream容器中
    s1>>output; // 然后再放到string类型的output里
    
    cout << output << endl; // 1234;

    // 值得注意的是我們两行显示都是1234但是他的资料形态卻已经不一样了，第一个是int的形态，第二行则是string的形态
}

    // 2. string 转 int:
void test02()
{
    stringstream ss; // 创建sstream 对象

    string s1="12345";
    int n1;

    ss << s1;
    //也可以使用 ss.str(s1);
    //或者 s1 = ss.str();
    
    ss >> n1;

    cout << s1 << endl; // "12345"
    cout << n1 << endl; // 12345
}
int main()
{
    test01();
    test02();
    
    return 0;
}
/*
。

● 相反的stringstream也可以将string转成int
