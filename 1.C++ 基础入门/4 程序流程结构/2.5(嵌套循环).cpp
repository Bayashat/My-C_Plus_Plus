//          嵌套循环
//  作用： 在循环体中再嵌套一层循环，解决一些实际问题
#include <iostream>
using namespace std;

int main()
{
    // 利用嵌套循环实现星图

    // 打印一行星图

    // 外层执行1次，内层执行1周。

    // 外层循环
    for(int a=0; a<10;a++)
    {
        // 内层循环
        for(int i = 0;i<10;i++)
        {
            cout << "* " ;
        }
        cout << endl;
    }
    return 0;
}