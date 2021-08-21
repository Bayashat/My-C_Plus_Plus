/*
        3. Void * 指针

    一种特殊的指针类型,可以存放任意对象的地址.
*/
#include <iostream>
using namespace std;

int main()
{
    double num = 3.14;

    double* p = &num;   // 以double类型的指针指向num
    
    void* p2 = &num;    // 以void类型指针指向num

    cout << (p == p2) << endl;  // True

    return 0;
}
/*
注意:
1.  Void * 指针存放一个内存地址,地址指向的内容是什么类型不能确定.
    导致我们无法通过解引用的方式修改它指向的值.

2.  Void * 类型指针一般用来:拿来和别的指针比较,作为函数的输入和输出;赋值给另一个指针.
*/