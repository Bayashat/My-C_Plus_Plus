/* 2.1 循环结构-While 语句
**作用：满足循环条件，执行循环语句

    语法：while(循环条件){ 循环语句 }

**解释: 只要循环条件的结果为真，就执行循环语句
*/
#include <iostream>
using namespace std;

int main()
{
    //While 循环
    //在屏幕中打印 0~9 这10个数字

    int num = 0;

    // 在while () 中填入循环条件
    while(num<10)   //条件是“不能超过10”
    {
        cout << num << endl;
        num++;
    }
    
    return 0;
}