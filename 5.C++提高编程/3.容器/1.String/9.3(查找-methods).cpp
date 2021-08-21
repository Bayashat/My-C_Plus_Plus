/*            9.3 查找-methods:
    1. find_first_of() 函数:
* 语句: s1.find_first_of(s2)
* 作用: 用于从字符串的首部开始 查找 s2 与它的共同字串

    2. find_last_of() 函数:
* 语句: s1.find_last_of(s2)
* 作用: 用于从字符串的尾部开始 查找 s2 与它的共同字串


*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    //  例题-1: 
    string s1 = "first second second third";
    string s2 = "asecond";

    int index = s1.find_first_of(s2);   // 3: s1 和 s2 共同具有的字符是 ’s’，该字符在 s1 中首次出现的下标是3，故查找结果返回3。

    if(index < s1.length())
        cout<<"Found at index : "<< index <<endl;
    else
        cout<<"Not found"<<endl;
    
    // 例题-2:
    string http = "www.runoob.com";

    int first = http.find_first_of("."); //从头开始寻找字符'.'的位置: 3
    int last = http.find_last_of(".");   //从尾开始寻找字符'.'的位置: 10

    cout << http.substr(first+1, last-first-1)<<endl; //"runoob"
    return 0;

}