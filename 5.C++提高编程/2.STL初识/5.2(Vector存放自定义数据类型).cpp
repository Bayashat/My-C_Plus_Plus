/*
        5.2 Vector存放自定义数据类型
学习目标: vector中存放自定义数据类型，并打印输出

*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//自定义数据类型
class Person
{
public:
    Person(string name, int age)
    {
        this->mName = name;
        this->mAge = age;
    }

    string mName;
    int mAge;
};

//存放对象
void test01()
{
    vector<Person> v;
    //创建数据:
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);
    Person p5("eee", 50);
    // 向容器添加数据:
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    // 遍历容器中的数据:
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "Name:" << (*it).mName << " Age:" << (*it).mAge << endl; // 解引用后解出来的是Person数据类型, 所以要用 . 输出数据
        // 也可以: cout << "Name:" << it->mName << " Age:" << it->mAge << endl;
    }
}

//放对象指针
void test02()
{
    vector<Person *> v;
    //创建数据
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);
    Person p5("eee", 50);
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);

    for (vector<Person *>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "Name:" << (*it)->mName << " Age:" << (*it)->mAge << endl;

        Person *p = (*it);
        cout << "Name:" << p->mName << " Age:" << (*it)->mAge << endl;
    }
}
int main()
{
    test01();
    test02();

    return 0;
}