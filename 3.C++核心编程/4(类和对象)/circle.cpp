#include "circle.h"

// 在此文件我们只需要留下函数的实现就好了

// 写 Circle:: 让其成为 Circle 作用域下的 成员函数.  不然它们会是全局函数.

// 设置半径:
void Circle::setR(int r)
{
    m_R = r;
}
// 获取半径:
int Circle::getR()
{
    return m_R;
}

// 设置圆心:
void Circle::setCenter(Point center)
{
    m_Center = center;
}
// 获取圆心:
Point Circle::getCenter()
{
    return m_Center;
}
