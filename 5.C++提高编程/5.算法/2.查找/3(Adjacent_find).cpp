/*              3. Adjacent_find  

功能 : 查找相邻重复元素
函数原型： adjacent_find(iterator beg, iterator end);

// 查找相邻重复元素,返回相邻元素的第一个位置的迭代器
// beg 开始迭代器
// end 结束迭代器

*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void test01()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(2);
    v.push_back(4);
    v.push_back(4); // 这个 vector 容器里相邻的是这两个4
    v.push_back(3);

    //查找相邻重复元素
    vector<int>::iterator it = adjacent_find(v.begin(), v.end());
    if (it == v.end())
    {
        cout << "找不到!" << endl;
    }
    else
    {
        cout << "找到相邻重复元素为:" << *it << endl;   // 4
    }
}
//  总结: 面试题中如果出现查找相邻重复元素，记得用STL中的adjacent_find算法