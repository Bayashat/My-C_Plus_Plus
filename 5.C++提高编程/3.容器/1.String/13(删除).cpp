/*
        14. 删除字符串--- erase(pos,npos)

erase() 函数可以删除 string 中的一个子字符串。它的一种原型为:
    * string& erase (size_t pos = 0, size_t len = npos);

pos 表示要删除的子字符串的起始下标，len 表示要删除子字符串的长度。如果不指明 len 的话，那么直接删除从 pos 到字符串结束处的所有字符 

    函数原型:

* string& erase(int pos, int n = npos);         //删除从Pos开始的n个字符

*/
#include <iostream>
using namespace std;


void test01()
{
    string s1, s2, s3;
    s1 = s2 = s3 = "1234567890";

    cout << s2.erase(5) << endl;    // 12345
    cout << s2 << endl;             // 12345
    
    s3.erase(5, 3);         // 1234590

}

int main()
{
    test01();
    return 0;
}
/*
有读者担心，在 pos 参数没有越界的情况下， len 参数也可能会导致要删除的子字符串越界。
但实际上这种情况不会发生，erase() 函数会从以下两个值中取出最小的一个作为待删除子字符串的长度：
len 的值；
字符串长度减去 pos 的值。

说得简单一些，待删除字符串最多只能删除到字符串结尾
*/