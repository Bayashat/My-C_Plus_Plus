//      11.Typedef  

//  用来改数据类型名字
// 语句: typedef 数据类型名 新名字; 可以写在头文件旁

#include <iostream>
#include <string>
using namespace std;

typedef string my_string;

int main()
{
    my_string s = "hello";
    cout << s;  // hello

    return 0;