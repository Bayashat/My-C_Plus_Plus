//      5 野指针:	指针变量指向非法的内存空间

#include <iostream>
using namespace std;

int main() 
{
	//指针变量p指向内存地址编号为0x1100的空间
	int* p = (int *)0x1100;		// (int *) 是在强转为指针类型,才能让它变成一个地址.

	//访问野指针报错 
	cout << *p << endl;

	return 0;
}
//  总结：空指针和野指针都不是我们申请的空间，因此不要访问。