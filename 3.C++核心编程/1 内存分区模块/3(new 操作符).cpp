/*          3. new 操作符

    * C++中利用 "new" 操作符在堆区开辟数据.
    * 堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符 "delete"
    * 指针真正的用武之地: 在运行阶段分配未命名的内存以存储值.
    * 在此情况下, 只能用指针来访问内存.
    
语法： new 数据类型

利用new创建的数据，会返回该数据对应的类型的指针
    * 关于 new 和 delete 使用规则:
    1. 不要使用delete释放不是new分配的内存
    2. 不要使用delete释放同一内存两次
    3. 如果使用new[]为数组分配内存,则对于 delete[]释放内存
*/
#include <iostream>
using namespace std;

//  1. new 的基本语法:
int *func()
{
    // 在堆区创建整型数据:
    int *p = new int(10); // 在程序运行到这儿时才给 p 分配了int型的10的地址
    return p;
}

void test01()
{
    int *p = func();
    cout << *p << endl; // 10
    cout << *p << endl; // 10
    // 堆区的数据 由程序员管理开辟, 程序员管理释放.
    // 如果想释放堆区的数据,利用关键字 delete
    delete p;

    cout << *p << endl; // 内存已经被释放,再次访问就是非法操作,会报错.
}

//  2. 在堆区利用new开辟数组:
void test02()
{
    // 创建有 10个 整型数据的数组: 
    int *arr = new int[10]; //  new会返回这块连续的内存空间的首地址
    // 使用for循环赋值 : 也可以 new int[10]{1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    
    //释放数组 delete 后加 []
    delete[] arr;
    system("pause");

}

int main()
{
    test01();
    test02();
}