/*          4. 引用做函数返回值.

作用: 引用是可以作为函数的返回值存在的
注意: 不要返回局部变量引用
用法: 函数调用作为左值

*/
#include <iostream>
using namespace std;

    // 1.不要返回局部变量的引用:
int& test01()
{
    int a = 10; //局部变量,存放在四区中的栈区.
    return a;
}

    // 2.函数的调用可以作为左值:
    //返回静态变量引用
int &test02()
{
    static int a = 20; // 静态变量,存放在全局区.全局区上的数据在程序结束后由系统释放.
    return a;
}
int main()
{
    // 1.不能返回局部变量的引用
    int &ref = test01();
    cout << "ref = " << ref << endl; // 10 第一次结果正确,是因为编译器做了保留.
    cout << "ref = " << ref << endl; // 第二次结果错误,因为a的内存已经释放.

    //如果函数做左值，那么必须返回引用
    int &ref2 = test02();
    cout << "ref2 = " << ref2 << endl; // 10
    cout << "ref2 = " << ref2 << endl; // 10

    test02() = 1000;

    cout << "ref2 = " << ref2 << endl; // 1000
    cout << "ref2 = " << ref2 << endl; // 1000

    system("pause");
    return 0;
}