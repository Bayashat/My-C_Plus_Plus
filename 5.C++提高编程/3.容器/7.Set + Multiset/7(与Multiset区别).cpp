/*      7. set和multiset区别

**学习目标:
    掌握set和multiset的区别

**区别: 

    * set不可以插入重复数据，而multiset可以
    * set插入数据的同时会返回插入结果，表示插入是否成功
    * multiset不会检测数据，因此可以插入重复数据
*/

#include <iostream>
#include <set>
using namespace std;

// 1.使用 set:
void test01()
{
    set<int> s1;
    pair<set<int> :: iterator, bool> ret = s1.insert(10);   // 由于插入的底层是对组,可以用对组接受插入的结果

    // 第一次是插入成功
    if(ret.second)      // 判断对组的第二项,也就是 bool
    {
        cout << "第一次插入成功" << endl;
    }
    else
    {
        cout << "第一次插入失败" << endl;
    }

    ret = s1.insert(10);    // 再次插10
    // 第二次是插入失败,因为set不允许重复
    if(ret.second)
    {
        cout << "第二次插入成功" << endl;
    }
    else
    {
        cout << "第二次插入失败" << endl;   
    }
}

// 2.使用multiset:  是允许插入重复值:
void test02()
{
    multiset<int> s2;
    // Multiset 插入返回的是迭代器,并不是bool,对组

    s2.insert(10);
    s2.insert(10);

    // 遍历：
    for(multiset<int> :: iterator it = s2.begin();it!=s2.end();it++)
    {
        cout << *it << " " ;
    }
    cout << endl;   // 10 10
}
int main()
{
    test02();

    return 0;
}
/*
总结：

* 如果不允许插入重复数据可以利用set
* 如果需要插入重复数据利用multiset
*/