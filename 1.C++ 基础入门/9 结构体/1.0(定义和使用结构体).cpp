/*          8.2 结构体定义和使用

**语法：struct 结构体名 { 结构体成员列表 }；

通过结构体创建变量的方式有三种：

* struct 结构体名 变量名
* struct 结构体名 变量名 = { 成员1值 ， 成员2值...}
* 定义结构体时顺便创建变量
*/
#include <iostream>
#include <string>
using namespace std;

//		1.创建学生数据类型:学生包括(姓名,年龄,分数)
//	自定义数据类型 是 一些类型集合组成的一个类型.
//	语法: struct 类型名称 { 成员列表 }

//结构体定义
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数

	// 构造函数: this 是为了让其能分辨, 可以不写 this, 但需要改变 参数列表的 名称, 不能让他们和成员列表的一样.
	student(string name, int age, int score)
	{
		this->name = name;
		this->age = age;
		this->score = score;
	}

	// 成员方法(成员函数):
	void print()
	{
		cout << this->name << " " << this->age << " " << this->score << endl;
	}
}stu3; //结构体变量创建方式-3 


int main() 
{
//			2.通过学生类型创建具体学生:

		// 2.1 结构体变量创建方式-1:
	struct student stu1; //struct 关键字可以省略 : student s1;

	// 给 stu1 属性赋值, 通过.访问结构体变量中的属性.
	stu1.name = "张三";
	stu1.age = 18;
	stu1.score = 100;
	
	stu1.print();

	// 2.2 结构体变量创建方式-2:
	struct student stu2 = { "李四", 19, 80 };

	stu2.print();

	// 2.3 在定义结构体时顺便创建结构体变量
	stu3.name = "王五";
	stu3.age = 18;
	stu3.score = 60;
	
	stu3.print();

	// 2.4 通过构造函数创建

	student stu4("Jack", 20, 150);
	stu4.print();
	return 0;
}
/*
> 总结1：定义结构体时的关键字是struct，不可省略

> 总结2：创建结构体变量时，关键字struct可以省略

> 总结3：结构体变量利用操作符 ''.''  访问成员
*/

