/*         9.1 字符串查找 - .find(str,pos) 函数


find() 函数用于在 string 字符串中查找子字符串出现的位置，它其中的两种原型为:
    1. size_t find (const string& str, size_t pos = 0) const;
    2. size_t find (const char* s, size_t pos = 0) const;

第一个参数为待查找的子字符串，它可以是 string 字符串，也可以是C风格的字符串。
第二个参数为开始查找的位置（下标）；如果不指明，则从第0个字符开始查找。

如果没有查找到子字符串:
    1. 在 cout << str.find(pos) 的情况下会返回一个无穷大值 4294967295
    2. 在用变量接收查找结果的话,会返回 -1 : int inex = str.find(pos) 

    函数原型:
int find(const string& str, int pos = 0) const;         //查找str第一次出现位置,从pos开始查找
int find(const char* s, int pos = 0) const;             //查找s第一次出现位置,从pos开始查找
int find(const char* s, int pos, int n) const;          //从pos位置查找s的前n个字符第一次位置
int find(const char c, int pos = 0) const;              //查找字符c第一次出现位置



*/
#include <iostream>
using namespace std;

void test01()
{
    string s1 = "first second third";
    string s2 = "second";

    int index = s1.find(s2,5);      // 6

    if(index < s1.length())
        cout<<"Found at index : "<< index <<endl;
    else
        cout<<"Not found"<<endl;

    if (s1.find("st") == -1) // 也可以写 string::npos : 如果未找到会返回 string::npos(-1)
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "pos = " << s1.find("st") << endl; // 3
    }


}

/*
    总结：
* find查找是从左往后，rfind从右往左
* find找到字符串后返回查找的第一个字符位置，找不到返回-1
*/