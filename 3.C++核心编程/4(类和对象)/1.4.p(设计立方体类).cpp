/*
        1.4.p 设计立方体类

1. 创建立方体类(Cube)
2. 设计属性
3. 设计行为 获取立方体面积和体积
4. 分别用全局函数和成员函数判断两个立方体是否相等.

*/
#include <iostream>
using namespace std;

class Cube
{
public:
    // 设置长
    void setL(int L)
    {
        m_L = L;
    }
    // 获取长
    int getL()
    {
        return m_L;
    }

    // 设置宽
    void setW(int W)
    {
        m_W = W;
    }
    // 获取宽
    int getW()
    {
        return m_W;
    }

    // 设置高
    void setH(int H)
    {
        m_H = H;
    }
    // 获取高
    int getH()
    {
        return m_H;
    }

    // 获取立方体面积
    int calculateS()
    {
        return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
    }

    // 获取立方体体积
    int calculateV()
    {
        return m_L * m_W * m_H;
    }

    // 利用成员函数判断 两个立方体是否相同
    bool isSameByClass(Cube &c)
    {
        if(m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
        {
            return true;
        }
        return false;     
    }
private:
    int m_L; // 长
    int m_W; // 宽
    int m_H; // 高
};

// 利用全局函数判断 两个立方体是否相同
bool isSame(Cube &c1, Cube &c2)
{
    if(c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
    {
        return true;
    }
    return false;
}
int main()
{
    // 创建立方体对象
    Cube c1;

    c1.setL(10);
    c1.setW(10);
    c1.setH(10);

    cout << "The Area of c1 is: " << c1.calculateS() << endl; // 600
    cout << "The Volume of c1 is: " << c1.calculateV() << endl; // 1000

    // 创建第二个立方体
    Cube c2;
    c2.setL(10);
    c2.setW(10);
    c2.setH(10);

    // 利用全局函数判断:
    bool ret = isSame(c1, c2);
    if(ret)
    {
        cout << "They're same";
    }
    else
    {
        cout << "They're not same";
    }

    // 利用成员函数判断:
    ret = c1.isSameByClass(c2);
    if(ret)
    {
        cout << "They're same";
    }
    else
    {
        cout << "They're not same";
    }

    return 0;
}