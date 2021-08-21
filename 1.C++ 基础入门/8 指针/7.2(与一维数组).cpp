/*            8.7.2  指针与一维数组:

  作用: 向函数传递只能用 指针 让一维数组进行地址传递, 不能用值传递
    目录:
 * 1. 指针和数组的一些用途
 * 2. 地址传递一维数组

 */
#include <iostream>
using namespace  std;


// 1. 指针和数组的一些用途
void test01()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(int);  // 获得数组长度

    int * p = arr;
    for(int i = 0; i < n; i++)
    {
        cout << *p++ << endl;   // or *(p+i)  // 1 2 3 4 
    }

    int* p2 = &arr[1];  // 将指针指向数组的第二个元素
    p2 += 2;    // 将指向右移2个数
    cout << *p2 << endl; // 4

    p2 -= 3;    // 将指向左移3个数
    cout << *p2 << endl; // 1
}

//  2. 地址传递一维数组:
void test02(int *a, int n)
{
    for(int i = 0; i < n; ++i)
    {
        cout << a[i] << " "; //  也可以 *(a + i)
    }
    cout << endl;
}
int main() 
{
    int a[5] = {1,2,3,4,5};

    // 1.指针和数组的一些用途
    test01();

    // 2.地址传递
    test02(a, 5); // 函数名本身就是 "地址"

    return 0;
}