#include "point.h"

// 在此文件我们只需要留下函数的实现就好了

// 写 Point:: 让其成为 Point 作用域下的 成员函数.  不然它们会是全局函数.

// 设置 X
void Point::setX(int x)
{
    m_X = x;
}
// 获取 X
int Point::getX()
{
    return m_X;
}

// 设置 Y
void Point::setY(int y)
{
    m_Y = y;
}
// 获取 Y
int Point::getY()
{
    return m_Y;
}
