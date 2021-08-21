/*  
        1.1.3 访问权限

封装意义二:
类在设计时，可以把属性和行为放在不同的权限下，加以控制

访问权限有三种：
1. public 公共权限
2. protected 保护权限
3. private 私有权限

*/
#include <iostream>
using namespace std;

//三种权限
//公共权限 public 类内可以访问 类外可以访问
//保护权限 protected 类内可以访问 类外不可以访问 儿子可以访问父亲的保护内容.
//私有权限 private 类内可以访问 类外不可以访问   儿子不可以访问父亲的私有内容.
class Person
{
    //公共权限
public:
    string m_Name; // 姓名
    //保护权限
protected:
    string m_Car; // 汽车
    //私有权限
private:
    int m_Password; // 银行卡密码 

public:
    void func()
    {
        m_Name = "张三";
        m_Car = "拖拉机";
        m_Password = 123456;
    }
protected:
    void func2()
    {
        cout << "This is text from func2()";
    }
};

int main()
{
    // 实例化具体对象:
    Person p;

    p.m_Name = "李四";

    p.m_Car = "奔驰"; //保护权限的内容在类外访问不到

    p.m_Password = 123; //私有权限内容在类外访问不到

    p.func(); // public 权限的成员方法是可以访问的

    p.func2(); // protected 和 private 权限的成员方法是不可以访问的

    return 0;
}