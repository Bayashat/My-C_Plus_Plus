/*          1. Rotate()

    语句：      rotate(start, middle, end);
          容器: rotate(v.begin(), v.begin()+x, v.end());  
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 1. 对数组 旋转:
void test01()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(int);

    rotate(a, a + 2, a + n); // 将前两个数 旋转到了后面去

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " "; // 3 4 5 6 1 2
    }
    cout << endl;
}

// 2. vector 容器旋转
void test02()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    rotate(v.begin(), v.begin() + 3, v.end()); // 本来是1-10嘛，现在旋转后，将4-10的元素旋到了前面，1，2，3 在后面。

    for (int i = 0; i < 10; i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    test01();
    test02();
}