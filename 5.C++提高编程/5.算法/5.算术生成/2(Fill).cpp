/*       5.5.2 fill

**功能 : 向容器中填充指定的元素


**函数原型 : fill(iterator beg, iterator end, value); 

  // beg 开始迭代器
  // end 结束迭代器
  // value 填充的值

  */
#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
using namespace std;

// 1. 填充 数组
void test01()
{
	int a[6];
	int n = sizeof(a) / sizeof(int);

	fill(a, a + 6, 10);
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";	// 10 10 10 10 10 10
    }
}
// 2. 填充容器
void test02()
{

	vector<int> v(10); // 开辟有10个位置的vector
	//后期重新填充:

	fill(v.begin(), v.end(), 4); // 10个全填充成4了

	fill(v.begin(), v.begin() + 4, 5); // 只有前4个填充成5

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";	// 5 5 5 5 4 4 4 4 4 4 
	}
	cout << endl;
}

int main()
{
	test01();

	test02();

	return 0;
}
// 总结 : 利用fill可以将容器区间内元素填充为 指定的值