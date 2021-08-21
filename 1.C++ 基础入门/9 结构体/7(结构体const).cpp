/*       8.7 结构体中 const使用场景

**作用：用const来防止误操作
*/
#include <iostream>
using namespace std;

//学生结构体定义
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

//const使用场景
    // 将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本。
void printStudent(const student *stu) //加const防止函数体中的误操作
{
	//stu->age = 100; //操作失败，因为加了const修饰. 加入const之后,一旦有修改的操作就会报错,可以防止我们的误操作.
	cout << "姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;

}

int main() 
{
	// 创建结构体变量
	student stu = { "张三",18,100 };

	// 通过函数打印结构体变量信息:
	printStudent(&stu);

	return 0;
}