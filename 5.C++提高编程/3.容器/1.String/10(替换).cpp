/*
            10. 替换字符串 - replace() 函数-
    函数原型:
    string& replace(int pos, int n, const string& str);     //替换从pos开始n个字符为字符串str
    string& replace(int pos, int n,const char* s);          //替换从pos开始的n个字符为字符串s

*/
#include <iostream>
using namespace std;
void test01()
{
    string str1 = "abcdefg";
    str1.replace(1, 3, "1111"); // 从下标1开始替换3个字串为 1111
    cout << str1 << endl; // a1111efg
}

void test02()
{
    //定义一个string类对象
    string http = "www.runoob.com";

    //拼接
    http.append("/C++");
    cout << http << endl; // www.runoob.com/C++

    //替换
    int pos = http.find("/C++"); //查找"C++"在字符串中的位置
    cout << pos << endl;

    http.replace(pos, 4, "");   //从位置pos开始，之后的4个字符替换为空，即删除
    cout << http << endl;   // ww.runoob.com
}
int main()
{
    test01();

    return 0;
}
/*
    总结：
* replace在替换时，要指定从哪个位置起，多少个字符，替换成什么样的字符串
*/