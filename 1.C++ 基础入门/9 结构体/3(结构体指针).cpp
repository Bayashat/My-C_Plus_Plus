/*      8.4 结构体指针

**作用：通过指针访问结构体中的成员

* 利用操作符 `-> `可以通过结构体指针访问结构体属性
*/
#include <iostream>
using namespace std;

//结构体定义
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

int main() 
{

	
	
	// 1.创建学生结构体变量
	struct student stu = { "张三",18,100, };
	
	// 2.通过指针指向结构体变量

	// int * p = &stu;		不能这么做, 当我们对 "stu"取地址的时候,它返回的是 student 这么一个数据类型.所以要写:
	struct student * p = &stu;	// 当然, struct 关键字可以省略.

	// 3.通过指针访问结构体变量中的数据
	p->score = 80; //指针通过 -> 操作符可以访问成员

	cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;

	return 0;
}
// 总结：结构体指针可以通过 -> 操作符 来访问结构体中的成员