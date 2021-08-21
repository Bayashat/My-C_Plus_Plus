/*           6. map容器排序

********* :  Multimap 的排序操作 与Map一样

**学习目标 : map容器默认排序规则为 按照key值进行 从小到大排序，掌握如何改变排序规则

**主要技术点: 利用"仿函数", 可以改变排序规则

	1. 使用仿函数, 将 key 从大到小排序
	2. 把 map 的数据 转入 vector<pair> 中, 再将其按 value 值排序
*/
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
class MyCompare
{
public:
	bool operator()(int v1, int v2) // 第一个小括号是重载的符号. 第二个是函数体的参数列表
	{
		return v1 > v2;
	}
};

// 1. 使用仿函数, 将 key 从大到小排序
void test01()
{
	//默认从小到大排序 , 利用仿函数实现从大到小排序:
	map<int, int, MyCompare> m; // 需要在其模板参数添加 仿函数

	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	m.insert(make_pair(5, 50));

	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key:" << it->first << " value:" << it->second << endl;
	}
}
// 2. 把 map 的数据 转入 vector<pair> 中, 再将其按 value 值排序
bool f(const pair<int, int> &p1, const pair<int, int> &p2) // 要用常数, 不然编译错误
{

	return p1.second > p2.second;
}
void test02()
{
	map<int, int> m;

	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	m.insert(make_pair(5, 50));

	// 放到 vector 中
	vector<pair<int, int>> v;
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		v.push_back(make_pair((*it).first, (*it).second));
	}
	// 进行排序
	sort(v.begin(), v.end(), f);

	for (vector<pair<int, int>>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << it->first << " " << it->second << "%" << endl;
	}
}
int main()
{

	test01();
	return 0;
}
/*
	总结: 
利用仿函数可以指定map容器的排序规则
对于自定义数据类型, map必须要指定排序规则,同set容器
*/