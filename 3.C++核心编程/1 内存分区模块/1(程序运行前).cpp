/*      1. 程序运行前:
有2个区: 代码区和全局区.

在程序编译后，生成了exe可执行程序，未执行该程序前分为两个区域

    代码区: 类似于一张贴墙上的告示,谁都可以看(共享),但谁都不能改(只读).
* 存放 CPU 执行的机器指令
* 代码区是"共享"的，共享的目的是对于频繁被执行的程序，只需要在内存中有一份代码即可
* 代码区是"只读"的，使其只读的原因是防止程序意外地修改了它的指令

    全局区: 此处数据的生命周期由操作系统管理.
* 全局变量和静态变量存放在此.
* 全局区还包含了常量区, 字符串常量和其他常量也存放在此.
==该区域的数据在程序结束后由操作系统释放==.

*/
#include <iostream>
using namespace std;

//全局变量 : 只要是没写在函数体内部的变量都是全局变量.
int g_a = 10;
int g_b = 10;

//全局常量 : const 修饰的全局变量,即全局常量:
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
    //创建普通局部变量 : 只要是写在函数内部的变量都叫局部变量.
    int a = 10;
    int b = 10;

    //打印地址
    cout << "局部变量a地址为： " << (int)&a << endl;  // 16121436
    cout << "局部变量b地址为： " << (int)&b << endl;  // 16121424

    cout << "全局变量g_a地址为： " << (int)&g_a << endl; // 10338356
    cout << "全局变量g_b地址为： " << (int)&g_b << endl; // 10338360

    //静态变量: 在普通变量前加static, 就会属于静态变量.
    static int s_a = 10;
    static int s_b = 10;
    cout << "静态变量s_a地址为： " << (int)&s_a << endl;
    cout << "静态变量s_b地址为： " << (int)&s_b << endl;

    // 常量:
    // 字符串常量: 就是用引号引起来的字符串:
    cout << "字符串常量地址为： " << (int)&"hello world" << endl;
    cout << "字符串常量地址为： " << (int)&"hello world1" << endl;

    // const 修饰的变量
    // const 修饰的全局变量(全局常量), const 修饰的局部变量(局部常量)
    cout << "全局常量c_g_a地址为： " << (int)&c_g_a << endl;
    cout << "全局常量c_g_b地址为： " << (int)&c_g_b << endl;

    const int c_l_a = 10;
    const int c_l_b = 10;
    cout << "局部常量c_l_a地址为： " << (int)&c_l_a << endl;
    cout << "局部常量c_l_b地址为： " << (int)&c_l_b << endl;
    system("pause");
    return 0;
}
