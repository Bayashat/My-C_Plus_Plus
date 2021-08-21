/*
        9. Set 容器 反转:

**** Multiset 的反转操作与set一样

* 要反转 Set 的数据, 我们使用 反迭代器( reverse iterator)

*/
#include <iostream>
#include <set>
using namespace std;

void test01()
{
    set<int> s1;
    for(int i = 10; i < 60; i+=10)
    {
        s1.insert(i);   // 10 20 30 40 50
    }

    //创建一个 反iterator:
    set<int>::reverse_iterator rit; 
    for (rit = s1.rbegin(); rit != s1.rend(); rit++)
    {
        cout << *rit << " "; // 输出交换顺序后的元素
    }
    cout << endl;   // 50 40 30 20 10
}
int main()
{
    test01();

    return 0;
}