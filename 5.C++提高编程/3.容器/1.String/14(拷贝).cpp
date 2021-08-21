/*      14. copy函数-（1）
        copy 
    str.copy(buffer,n,0); 
    buffer[n] = '\0'  

    str.copy(str2,n,pos)          将str的n个字符从pos位置开始复制给str2     
*/
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void test01()
{
    char c[5];
    c[0] = 't';
    c[1] = 'e';
    c[2] = 's';
    c[3] = 't';
    c[4] = '\0';
    
    string str(c);  // 可以这样复制

    cout << c << endl; // test
    cout << str << endl; // test
}

void test02()
{
    string str = "test";

    int n = str.size();
    char c[n];
    str.copy(c,n,0);    // 将str里的copy到c里，
    c[n] = '\0';

    cout << c << endl; // test
    cout << str << endl; // test
}
int main()
{
    test01();
    test02();

    return 0;
}