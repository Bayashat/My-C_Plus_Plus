/*
         9.2 字符串查找 - .rfind(str,pos) 函数

    rfind: reverse find: 反向查找

    rfind() 和 find() 很类似，同样是在字符串中查找子字符串，不同的是 find() 函数从第二个参数开始往后查找，
    而 rfind() 函数则是从第二个参数所指定的位置向前查找,如果没有找到子字符串, 则返回一个无穷大值4294967295 - string::npos

int rfind(const string& str, int pos = npos) const;     //查找str最后一次位置,从pos开始查找
int rfind(const char* s, int pos = npos) const;         //查找s最后一次出现位置,从pos开始查找
int rfind(const char* s, int pos, int n) const;         //从pos查找s的前n个字符最后一次位置
int rfind(const char c, int pos = 0) const;             //查找字符c最后一次出现位置

rfind 和 find 区别:
    rfind 是从右往左查找
    find 是从左往右查找

*/
#include <iostream>
using namespace std;
int main()
{
    string s1 = "first second third";
    
    int pos = s1.rfind("ir");
    if(pos != string::npos)
    {
        cout <<  pos << endl; // 15
    }
    else
    {
        cout << "Not found";
    }
    
    cout << s1.rfind("ir", 7); // 1

    return 0;
}

/*
总结:
    * find查找是从左往后，rfind从右往左

*/