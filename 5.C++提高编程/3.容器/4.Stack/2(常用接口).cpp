/*    1. stack 常用接口

功能描述: 栈容器常用的对外接口

构造函数: 

*  stack<T> stk;                    //stack采用模板类实现, stack对象的默认构造形式
*  stack(const stack &stk);         //拷贝构造函数

赋值操作: 

*  stack& operator=(const stack &stk);           //重载等号操作符

数据存取: 

*  push(elem);      //向栈顶添加元素
*  pop();                //从栈顶移除第一个元素
*  top();                //返回栈顶元素

大小操作: 

*  empty();            //判断堆栈是否为空
*  size();               //返回栈的大小
*/
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // 1.创建栈:
    stack<int> s;
    
    // 2.入栈：
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    // 3. 查看栈大小:
    cout << s.size() << endl; // 5

    // 4. 遍历栈: 只要栈不为空，查看栈顶，并且执行出栈操作: 
    while(!s.empty())
    {
        // 查看栈顶元素:
        cout << s.top() << " "; // 50 40 30 20 10
        // 出栈:
        s.pop();    
    }

    return 0;
}
/*
    总结:
入栈 --- push
出栈 --- pop
返回栈顶 --- top
判断栈是否为空 --- empty
返回栈大小 --- size
*/