/*       	6 count_if

** 功能 : 按条件统计元素个数

**函数原型 : count_if(iterator beg, iterator end, _Pred);  

  // 按条件统计元素出现次数

  // beg 开始迭代器

  // end 结束迭代器

  // _Pred 谓词 或者 bool 类型的普通函数
  */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


bool f(int x) // predicat
{
	if(x % 2 == 0)	return true;	// 也可以只写: return (x % 2);
	return false;
}
/*
class Greater4
{
public:
	bool operator()(int val)
	{
		return val >= 4;
	}
};
*/
// 1. 统计内置数据类型
void test01()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);

	int num = count_if(v.begin(), v.end(), f);

	cout << "The number of even  is: " << num << endl; // 4
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// 2.自定义数据类型
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};
// 统计岁数小于35的人员个数:
class AgeLess35
{
public:
	bool operator()(const Person &p)
	{
		return p.m_Age < 35;
	}
};
void test02()
{
	vector<Person> v;

	Person p1("刘备", 35);
	Person p2("关羽", 35);
	Person p3("张飞", 35);
	Person p4("赵云", 30);
	Person p5("曹操", 25);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	int num = count_if(v.begin(), v.end(), AgeLess35());
	cout << "小于35岁的个数：" << num << endl; // 2
}


int main()
{

	test02();

	test01();
	return 0;
}