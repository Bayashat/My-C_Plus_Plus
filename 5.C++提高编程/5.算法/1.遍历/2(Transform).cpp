/*       5.1.2 transform

** 功能 : 搬运容器到另一个容器中

**函数原型:  transform(iterator beg1, iterator end1, iterator beg2, _func);

//beg1 源容器开始迭代器

//end1 源容器结束迭代器

//beg2 目标容器开始迭代器

//_func 函数或者函数对象 - 仿函数
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 仿函数-1 : 搬运仿函数 
// 此仿函数的作用是 如果有必要可以做一些逻辑运算, 比如要在搬运时还给每个数+100的话:
class TransForm 
{
public:
	int operator()(int val)
	{
		return val;	// return val + 100 ;
	}

};

// 仿函数-2 : 打印仿函数 
class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int> vTarget; //目标容器

 	// 目标容器需要提前开辟空间	
	vTarget.resize(v.size());

	transform(v.begin(), v.end(), vTarget.begin(), TransForm());

	for_each(vTarget.begin(), vTarget.end(), MyPrint());
}

int main() 
{
	test01();
	return 0;
}
// 总结: 搬运的目标容器必须要提前开辟空间，否则无法正常搬运