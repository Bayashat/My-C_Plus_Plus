/*          3. Replace_if

功能 : 将区间内满足条件的元素，替换成指定元素
函数原型 : replace_if(iterator beg, iterator end, _pred, newvalue);

// 按条件替换元素，满足条件的替换成指定元素
// beg 开始迭代器
// end 结束迭代器
// _pred 谓词
// newvalue 替换的新元素

*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class myPrint
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};
class ReplaceGreater30 
{
public:
    bool operator()(int val)
    {
        return val >= 30;
    }
};
void test01()
{
    vector<int> v;
    v.push_back(20);
    v.push_back(30);
    v.push_back(20);
    v.push_back(40);
    v.push_back(50);
    v.push_back(10);
    v.push_back(20);

    cout << "替换前：" << endl;
    for_each(v.begin(), v.end(), myPrint()); // 20 30 20 40 50 10 20
    cout << endl;

    //将容器中大于等于的30 替换成 3000
    cout << "替换后：" << endl;
    replace_if(v.begin(), v.end(), ReplaceGreater30(), 3000); 
    for_each(v.begin(), v.end(), myPrint()); // 20 3000 20 3000 3000 10 20
    cout << endl;
}
int main()
{
    test01();

    return 0;
}
//  总结 : replace_if按条件查找, 可以利用仿函数灵活筛选满足的条件