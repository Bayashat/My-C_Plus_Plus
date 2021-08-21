#pragma once // 这是防止头文件重复包含
#include <iostream>
using namespace std;

    // 在此文件只需留下函数的声明就好

// 点类:
class Point
{
public:
    // 设置 X
    void setX(int x);

    // 获取 X
    int getX();

    // 设置 Y
    void setY(int y);

    // 获取 Y
    int getY();

private:
    int m_X;
    int m_Y;

};