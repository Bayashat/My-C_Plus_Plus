/*       8.2 结构体数组

**作用：将自定义的结构体放入到数组中方便维护

**语法：struct  结构体名 数组名[元素个数] = {  {} , {} , ... {} }
*/
#include <iostream>
#include <string>
using namespace std;
 
// 1. 定义结构体
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

int main() 
{
	
	// 2.创建结构体数组
	struct student stuArr[3]=
	{
		{"Jam",18,100 },
		{"Li",19,99 },
		{"Wang",20,66 }
	};

    // 3.给结构体数组中的元素赋值
	stuArr[2].name = "Zhao";   
	stuArr[2].age = 80;
	stuArr[2].score = 60;
	
	// 4.遍历结构体数组:
	for (int i = 0; i < 3; i++)
	{
		cout << "Name " << stuArr[i].name << " Age: " << stuArr[i].age << " Score: " << stuArr[i].score << endl;
	}

	return 0;
}