/*
        3. 遍历 set 容器:

**** Multiset 的遍历操作与set一样

 * 注意: set 容器不可以用 [] 

 1. 使用迭代器
 2. 使用 auto 
 3. 使用反迭代器 逆向输出数据
*/
#include <iostream>
#include<set>
using namespace std;

// 1. 使用迭代器：
void printSet01(set<int> &s)
{
    for(set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

// 2. 使用 auto:
void printSet02(set<int> &s)
{
    for(auto x : s)
    {
        cout << x << " ";
    }
    cout << endl;
}

// 3. 使用反迭代器 逆向输出数据
void printSet03(set<int> &s)
{
    for(set<int>::reverse_iterator rit = s.rbegin(); rit != s.rend(); rit++)
    {
        cout << *rit << " ";
    }
}
int main()
{
    set<int> s1;
    s1.insert(10);
    s1.insert(40);
    s1.insert(30);
    s1.insert(20);
    s1.insert(30);
    // 1. 使用迭代器：
    printSet01(s1); // 10 20 30 40

    // 2. 使用 auto:
    printSet02(s1); // 10 20 30 40

    // 3. 使用反迭代器 逆向输出数据
    printSet03(s1); // 40 30 20 10
    return 0;
}