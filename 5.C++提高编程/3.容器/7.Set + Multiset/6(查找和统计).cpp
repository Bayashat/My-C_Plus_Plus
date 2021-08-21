/*      6. set查找和统计

**** Multiset 的查找和统计操作与set一样

**功能描述:

    对set容器进行查找数据以及统计数据

**函数原型:
    * find(key);                 //查找key是否存在,若存在, 返回该键的元素的迭代器: 若不存在, 返回set.end();
    * count(key);                //统计key的元素个数
** Multiset 还有一种:
    * equal_range(key);        // 查找所有key
*/
#include <iostream>
#include <set>
using namespace std;

// 1. 查找；
void test01()
{
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);

    set<int>::iterator pos = s1.find(30); // 因为它会传一个迭代器，所以我们需要用iterator接受

    if (pos != s1.end()) // set容器find若没找到的话，会返回s.end(), 所以这么做
    {
        cout << "found " << *pos << endl; // 30:  我们还可以解出来它
    }
    else
    {
        cout << "NO" << endl;
    }
}

// 2.Multiset 的 equal_range()
void test02()
{
    multiset<int> ms;
    ms.insert(10);
    ms.insert(30);
    ms.insert(20);
    ms.insert(40);
    ms.insert(10);

    pair< multiset<int>::iterator, multiset<int>::iterator > r = ms.equal_range(10);

    multiset<int>::iterator it;
    for(it = r.first; it != r.second; it++)
    {
        cout << *it << " "; // 10 10
    }

}
// 2.统计
void test02()
{
    set<int> s2;
    s2.insert(10);
    s2.insert(30);
    s2.insert(20);
    s2.insert(40);

    // 统计30的个数:
    cout << s2.count(30) << endl; // 1
}
int main()
{
    test02();

    return 0;
}
/*
    总结: 
查找 --- find （返回的是迭代器）
统计 --- count （对于set，结果为0或者1）
*/