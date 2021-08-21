/*          2.2 程序运行后 - 堆区

 2. 堆区:
    * 由程序员分配释放,若程序员不释放,程序结束时由操作系统回收
    * 在C++中主要利用new在堆区开辟内存
    * 
*/
#include <iostream>
using namespace std;

int *func()
{
    // 利用 new 关键字,可以将数据开辟到堆区
    // 指针本质也是局部变量,是放在栈区的,指针保存的数据是放在堆区的.
    int *p = new int(10); // 指针是局部变量,指向的是堆区 :我们在堆区开辟了一段内存,然后用指针接受了它返回的这块内存的地址编号.
    return p;
}

int main()
{
    int *p = func();
    cout << *p << endl; // 10

    cout << *p << endl;
    system("pause");
    return 0;
}