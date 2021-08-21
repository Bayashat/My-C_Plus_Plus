/*      8. set容器排序

**** Multiset 的排序操作与set一样

 * set 容器会自动将内置数据类型 从小到大排序

学习目标: 
    * set容器默认排序规则为从小到大，掌握如何改变排序规则 从大到小

主要技术点:
    * 利用仿函数，可以改变排序规则

****** 注意:
    * Set 容器不支持 sort() 和 reverse() 算法
*/
#include <iostream>
#include <set>
using namespace std;
 
    // 1.Set 存放内置数据类型 排序:

class MyCompare // 指定排序规则的仿函数
{
public:
    bool operator()(int v1, int v2) // 第一个小括号是重载的符号. 第二个是函数体的参数列表
    {
        return v1 > v2;
    }
};
void test01()
{
    set<int> s1;

    s1.insert(10);
    s1.insert(40);
    s1.insert(20);
    s1.insert(50);
    s1.insert(30);

    for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
    {
        cout << *it << " ";  // 10 20 30 40 50
    }
    cout << endl; 

    // 指定排序规则从大到小: 要将它排序需要在它插入数据前指定规则
    set<int, MyCompare> s2; // 需要在模板参数列表加 "仿函数". 本来默认是 从小到大.

    s2.insert(10);
    s2.insert(40);
    s2.insert(20);
    s2.insert(50);
    s2.insert(30);

    for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
    {
        cout << *it << " "; // 50 40 30 20 10
    }
    cout << endl; 
}
/*
//////////////////////////////////////////////////////////////////////////////////////////////////
*/


    // 2. Set 存放自定义数据类型 排序:
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
class comparePerson
{
public:
    bool operator()(const Person &p1, const Person &p2)  // 第一个小括号是重载的符号. 第二个是函数体的参数列表
    {
        //按照年龄进行排序: 降序
        return p1.m_Age > p2.m_Age;
    }
};

void test02()
{
    // 自定义数据类型 都会指定排序规则:
    set<Person, comparePerson> s;

    Person p1("刘备", 23);
    Person p2("关羽", 27);
    Person p3("张飞", 25);
    Person p4("赵云", 21);
    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);

    for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << "姓名： " << it->m_Name << " 年龄： " << it->m_Age << endl;
    }
}

int main()
{
    test01();

    test02();

    return 0;
}
