//  示例2：设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号

#include <iostream>
using namespace std;

//创建学生类:
class Student
{
public:
    // 类中的属性和方法, 我们统一称为 成员
    // 属性     成员属性 成员变量
    // 方法     成员函数 成员方法

    // 属性:
    string m_name;
    int m_id;

    // 行为:
    void showStudent() //显示姓名和学号
    {
        cout << "name:" << m_name << " ID:" << m_id << endl;
    }

    // 给姓名赋值:
    void setName(string name)
    {
        m_name = name;
    }
    // 给学号赋值:
    void setID(int id)
    {
        m_id = id;
    }

};
int main()
{
    // 创建一个具体学生 实例化对象:
    Student stu;
    stu.m_name = "Jack";
    stu.m_id = 001;
    
    // 也可以这样赋值:
    stu.setName("德玛西亚");
    stu.setID(250);
    stu.showStudent();

    return 0;
}