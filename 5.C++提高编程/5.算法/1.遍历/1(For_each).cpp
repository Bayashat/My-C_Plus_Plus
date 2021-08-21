/*           5.1.1 for_each

** 功能 : 实现遍历容器

**函数原型:   *  for_each(iterator beg, iterator end, _func);  

  // 遍历算法 遍历容器元素

  // beg 开始迭代器

  // end 结束迭代器

  // _func 函数或者函数对象 - 仿函数
  */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 1.普通函数
void print01(int val) 
{
	cout << val << " ";
}
// 2.函数对象(仿函数)
class print02 
{
 public:
	void operator()(int val) 
	{
		cout << val << " ";
	}
};

			// for_each算法基本用法
void test01() 
{

	vector<int> v;
	for (int i = 0; i < 10; i++) 
	{
		v.push_back(i);
	}

	//遍历算法
	// 1.普通函数
	for_each(v.begin(), v.end(), print01); // 0 1 2 3 4 5 6 7 8 9 
	cout << endl;

	// 2.函数对象(仿函数)
	for_each(v.begin(), v.end(), print02()); // 0 1 2 3 4 5 6 7 8 9
	cout << endl;
}

int main() 
{

	test01();

	return 0;
}
// 总结: for_each在实际开发中是最常用遍历算法，需要熟练掌握