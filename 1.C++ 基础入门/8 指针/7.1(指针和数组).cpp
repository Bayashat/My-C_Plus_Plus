/*       	7.1 指针和数组

**作用：利用指针访问数组中元素
*/
#include <iostream>
using namespace std;
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	cout << arr << endl;		// 0x61ff04 - 数组名本身就是首地址
	cout << arr + 2 << endl;	// 0x61ff0c - 获取第二个元素的地址
	cout << *arr << endl;		// 1 - 解首地址以获得首个元素
	cout << *(arr + 2) << endl; // 3 - 相当于 arr[2]

	cout << "第一个元素： " << arr[0] << endl; // 1

	// 用指针访问:
	int *p = arr; //指向数组的指针, arr就是数组的首地址。

	cout << "指针访问第一个元素： " << *p << endl; // 1

	p++;										   // 让指针向后偏移4个字节
	cout << "指针访问第二个元素： " << *p << endl; // 2

	for (int i = 0; i < 10; i++)
	{
		//利用指针遍历数组
		cout << *p << endl;
		p++;
	}

	return 0;
}