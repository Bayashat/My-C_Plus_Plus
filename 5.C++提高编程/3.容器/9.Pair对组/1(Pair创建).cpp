/*    
        1. pair对组创建

**功能描述: 

    * 成对出现的数据，利用对组可以返回两个数据

**两种创建方式: 

    * pair<type, type> p ( value1, value2 );
    * pair<type, type> p = make_pair( value1, value2 );
*/
#include <iostream>
#include <string>
#include <set>
using namespace std;

void test01()
{
    // 第一种方式创建对组:
    pair<string,int>p("Tom",20); 
    cout << "Name: " << p.first << " age: " << p.second << endl;    // Tom 20

    // 第二种方式创建对组:
    pair<string,int>p2 = make_pair("Jerry",30);   
    cout << "Name: " << p2.first << " age: " << p2.second << endl;  // Jerry 30
    
}
int main()
{
    test01();
    
    return 0;
}
