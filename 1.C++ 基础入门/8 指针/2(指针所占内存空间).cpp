/*       	2 指针所占内存空间
提问：指针也是种数据类型，那么这种数据类型占用多少内存空间？
*/
#include <iostream>
using namespace std;

int main()
{
	int a = 10;

	/*
	以下这两行代码 等价于 第17行代码:
	int *p;
	p = &a;
	*/

	int* p = &a; //指针指向数据a的地址

	cout << *p << endl;		   //* 10: 解引用
	cout << sizeof(p) << endl; // 4 bit: 也可以写 "sizeof(int *)"  这是 整型指针 所占内存空间
	cout << sizeof(char *) << endl;		// 4 bit
	cout << sizeof(float *) << endl;	// 4 bit
	cout << sizeof(double *) << endl;	// 4 bit

	return 0;
}
//  总结：所有指针类型在32位操作系统下(X86)是4个字节， 在64位操作系统下(X64)是8个字节。