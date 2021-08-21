/*
         goto语句(传送门)

**作用：可以无条件跳转语句



**语法：goto 标记;

**解释：如果标记的名称存在，执行到goto语句时，会跳转到标记的位置
*/
#include <iostream>
using namespace std;

int main()
{
    // goto 语句(传送门)

    cout << "1.xxxxx" << endl;
    cout << "2.xxxxx" << endl;
    goto FLAG;
    cout << "3.xxxxx" << endl;
    cout << "4.xxxxx" << endl;
    cout << "5.xxxxx" << endl;
    FLAG:
    cout << "6.xxxxx" << endl;

    return 0;
}   //注意：在程序中不建议使用goto语句，以免造成程序流程混乱