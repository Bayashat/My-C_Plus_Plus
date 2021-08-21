/*        8.2 结构体做函数参数 

**作用：将结构体作为参数向函数中传递

传递方式有三种：
	* 1. 值传递
	* 2. 地址传递
	* 3. 引用传递

*/
#include <iostream>
using namespace std;

		// 将学生传入到一个参数中,打印学生身上的所有信息.

//定义学生结构体
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

// 1.值传递
void printStudent(struct student stu )
{
	stu.age = 28;
	cout << "子函数中 姓名：" << stu.name << " 年龄： " << stu.age  << " 分数：" << stu.score << endl;
}

// 2.地址传递
void printStudent2(struct student *stu)
{
	stu->age = 28;
	cout << "子函数中 姓名：" << stu->name << " 年龄： " << stu->age  << " 分数：" << stu->score << endl;
}

// 3. 引用传递
void printStudent3(struct student &stu)
{
	stu.age = 28;
	cout << "子函数中 姓名：" << stu.name << " 年龄： " << stu.age  << " 分数：" << stu.score << endl;
}
int main() 
{
	// 创建结构体变量:
	struct student stu = { "张三",18,100};

	// 1.值传递
	printStudent(stu);
	cout << " 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;

	cout << endl;

	// 2.地址传递
	printStudent2(&stu);
	cout << " 姓名：" << stu.name << " 年龄： " << stu.age  << " 分数：" << stu.score << endl;

	// 3.引用传递
	printStudent3(stu);
	cout << " 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
	return 0;
}
//	总结：如果不想修改主函数中的数据，用值传递，反之用地址传递 或 引用传递