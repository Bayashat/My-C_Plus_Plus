//      7.布尔类型(bool)

//作用：bool 数据类型代表真或假的值

//Bool类型只有两个值：
// True ---- 真（本质是1）
// False ---- 假（本质是0）

//Bool类型占用1个字节大小
#include <iostream>
using namespace std;

int main()
{
    //  1.创建bool数据类型
    bool flag = true;  // true代表真(1)
    cout << flag << endl;   // 1

    flag = false;  //false代表假(0)
    cout << flag << endl;   // 0


    //  2.查看bool类型所占内存空间
    cout << "bool's size is " << sizeof(bool) << endl;  // 1 byte
    
    //  3. 让其输出时显示 True 或 False, 而不是 0 或 1
    cout << boolalpha;
    cout << (15 > 89) << endl;  // false
    cout << (27 < 55) << endl;  // true


    return 0;
}