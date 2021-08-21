/*         2. vector构造函数

**功能描述:

  创建vector容器

**函数原型:

 1. vector<T> v;               		   // 无参: 采用模板实现类实现，默认构造函数
 2. vector<T> v = {ele1, ele2, ...}     // 直接用等号赋值
 2. vector(v.begin(), v.end());         //将v[begin(), end())区间中的元素拷贝给本身。
 3. vector(n, elem);                   //构造函数将n个elem拷贝给本身。
 4. vector(const vector &vec);         //拷贝构造函数
*/
#include <iostream>
#include <vector>
using namespace std;
// 为了方便,创建一个打印vector数据的函数
void printVector(vector<int>&v)
{
    for(vector<int> :: iterator it = v.begin();it!=v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
void test01()
{
    // 1.默认构造, 无参构造
    vector<int> v1; 

    int n,x;
    cin >> n ;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v1.push_back(x);
    }
    printVector(v1);

    // 2.等号 = 赋值:
    vector<int> v = {1, 2, 3, 4, 5};

    // 3.通过区间的方式进行构造:
    vector<int>v2(v1.begin(),v1.end());
    printVector(v2);

    // 4. n个elem方式构造:
    vector<int>v3(10,100);      // 创建了10个100；
    printVector(v3);

    // 5.拷贝构造:
    vector<int>v4(v3);
    printVector(v4);

    
}
int main()
{
    test01();
}

// **总结: vector的多种构造方式没有可比性, 灵活使用即可