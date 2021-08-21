/*       8.7 结构体案例-1

**案例描述：

学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下

设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员

学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值

最终打印出老师数据以及老师所带的学生数据。
*/
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

//  学生的结构体
struct Student
{
	string name; // 姓名
	int score;  // 分数
};

// 老师的结构体定义
struct Teacher
{
	string name;  // 姓名
	Student sArray[5];  // 学生数组
};

// 给老师和学生赋值的函数
void allocateSpace(struct Teacher tArray[] , int len)
{
	string tName = "Teacher";
	string sName = "Student";
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++)   // 给老师赋值
	{
		tArray[i].name = tName + nameSeed[i];
		
		for (int j = 0; j < 5; j++) // 给每名老师所带的学生赋值
		{
			tArray[i].sArray[j].name = sName + nameSeed[j];

            int random = rand() % 61 + 40;
			tArray[i].sArray[j].score = random;
		}
	}
}

//  打印所有信息
void printTeachers(Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << tArray[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tName: " << tArray[i].sArray[j].name << " Score: " << tArray[i].sArray[j].score << endl;   // "\t" 是转义字符
		}
	}
}

int main() 
{
	//	随机数种子:利用系统当前的时间产生随机数
	srand((unsigned int)time(NULL));

    // 1.创建3名老师的数组
	struct Teacher tArray[3];

    // 2.通过函数给三名老师的信息赋值，并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(Teacher);
	allocateSpace(tArray, len); 

    // 3.打印所有老师及所带的学生信息。
	printTeachers(tArray, len);

	return 0;
}