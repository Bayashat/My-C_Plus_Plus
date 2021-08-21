/*
        1.1 封装的意义
封装是C++面向对象三大特性之一
    封装的意义:
* 将属性和行为作为一个整体，表现生活中的事物
* 将属性和行为加以权限控制

封装意义一：
在设计类的时候，属性和行为写在一起，表现事物
语法： class 类名{ 访问权限： 属性 / 行为 };

*/

// 示例1: 设计一个圆类，求圆的周长
#include <iostream>
using namespace std;

//圆周率
const double PI = 3.14;

//class代表设计一个类，后面跟着的是类名
class Circle
{
public: //访问权限 公共的权限

    //属性
    int m_r; //半径

    //行为
    //获取到圆的周长
    double calculateZC()
    {
        //2 * pi * r
        //获取圆的周长
        return 2 * PI * m_r;
    }
};
int main()
{
    //通过圆类，创建圆的对象
    // 实例化(通过一个类 创建一个对象的过程) 
    // c1就是一个具体的圆
    Circle c1;

    // 给圆对象 的属性赋值
    c1.m_r = 10; //给圆对象的半径 进行赋值操作
    //2 * pi * 10 = = 62.8
    cout << "圆的周长为： " << c1.calculateZC() << endl; // 62.8

    return 0;
}
