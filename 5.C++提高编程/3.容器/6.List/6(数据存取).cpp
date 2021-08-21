/*

        6 list 数据存取
功能描述:
    对list容器中数据进行存取
函数原型:
    front(); //返回第一个元素
    back(); //返回最后一个元素

*/
#include <iostream>
#include <list>
using namespace std;

void test01()
{
    list<int> L1;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);

    // 不支持,原因是: list本质是链表,不是用连续线性空间存储数据
    cout << L1.at(0) << endl;   //错误 不支持at访问数据
    cout << L1[0] << endl;  //错误 不支持[]方式访问数据

    cout << "第一个元素为： " << L1.front() << endl; // 10
    cout << "最后一个元素为： " << L1.back() << endl; // 40

    //list容器的迭代器是双向迭代器，不支持随机访问
    list<int>::iterator it = L1.begin();
    //it = it + 1;//错误，不可以跳跃访问，即使是+1
    // 但支持双向:
    it++;
    it--;
}
int main()
{
    test01();

    return 0;
}
/*
总结: 
    1. list容器中不可以通过[]或者at方式访问数据
    2. 返回第一个元素 --- front
    3. 返回最后一个元素 --- back
*/