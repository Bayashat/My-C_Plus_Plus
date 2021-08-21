/*          9.4 结构体嵌套结构体

**作用： 结构体中的成员可以是另一个结构体

**例如：每个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体

**示例：
*/

#include <iostream>
#include <string>
using namespace std;

//定义学生结构体
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

//定义教师结构体
struct teacher
{
    //成员列表
	int id; //职工编号
	string name;  //教师姓名
	int age;   //教师年龄
	struct student stu; //子结构体 辅导的学生
};


int main() 
{
    // 创建老师
	struct teacher t1;
	t1.id = 10000;
	t1.name = "Jam";
	t1.age = 40;
    // 创建学生
	t1.stu.name = "Li";
	t1.stu.age = 18;
	t1.stu.score = 100;

	cout << "Teacher's id: " << t1.id << " Name: " << t1.name << " age: " << t1.age << endl;
	
	cout << "Student's name: " << t1.stu.name << " Age: " << t1.stu.age << " Score: " << t1.stu.score << endl;

	return 0;
}
//	总结：在结构体中可以定义另一个结构体作为成员，用来解决实际问题