/*
        12. 向函数传递 Vector

1. 值传递
2. 地址传递
3. 引用传递
*/
#include <iostream>
#include <vector>
using namespace std;

// 1.值传递:
void printVector01(vector<int> v)
{
    v.push_back(12); // 并不会影响实参

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";    // 1 2 3 4 5 6
    }
}
// 2.地址传递:
void printVector02(vector<int> * v)
{
    v->push_back(12); // 需要用 ->

    for(int i = 0; i < v->size(); i++)
    {
        cout << v->at(i) << " ";    // 1 2 3 4 5 6
    }
}

// 3.引用传递:
void printVector03(vector<int> &v)
{
    v.push_back(12); // 会影响实参

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";    // 1 2 3 4 5 6
    }
}
int main()
{
    vector <int> v = {1,2,3,4,5,6};
    // 1.值传递: 不会影响实参,拷贝数据
    printVector01(v);

    // 2.地址传递:影响实参
    printVector02(&v);

    // 3.地址传递: 影响实参
    printVector03(v);

    return 0;
}