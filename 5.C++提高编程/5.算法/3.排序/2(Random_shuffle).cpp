/*              2. Random_shuffle

功能 : 洗牌 指定范围内的元素随机调整次序
函数原型:  random_shuffle(iterator beg, iterator end);

// 指定范围内的元素随机调整次序
// beg 开始迭代器
// end 结束迭代器
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime> // 随机数头文件
using namespace std;

class myPrint // 遍历仿函数
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};
void test01()
{
    srand((unsigned int)time(NULL)); // 随机数种子
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    for_each(v.begin(), v.end(), myPrint()); // 0 1 2 3 4 5 6 7 8 9
    cout << endl;

    //  利用洗牌算法 打乱顺序
    random_shuffle(v.begin(), v.end());
    for_each(v.begin(), v.end(), myPrint()); // 8 1 9 2 0 5 7 3 4 6
    cout << endl;
}
int main()
{
    test01();

    return 0;
}
//  总结: random_shuffle洗牌算法比较实用，使用时记得加随机数种子