/*      3. vector赋值操作

**功能描述:

* 给vector容器进行赋值

**函数原型:

* vector& operator=(const vector &vec);//重载等号操作符

 1. assign(beg, end);       //将[beg, end)区间中的数据拷贝赋值给本身。
 2. assign(n, elem);        //将n个elem拷贝赋值给本身。
*/

#include <iostream>
#include <vector>
using namespace std;

// 打印函数
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
    vector<int> v1;       
    int n,x;
    cin >> n ;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v1.push_back(x);
    }
    // 赋值1:
    vector<int>v2;
    v2 = v1;
    printVector(v2);

    // 赋值2 (assign)：
    vector<int>v3;
    v3.assign(v1.begin(),v1.end());
    printVector(v3);

    // 赋值3 (assign2), n个elem方式:
    vector<int>v4;
    v4.assign(10,100);  // 10个100；
    printVector(v4);

}
int main()
{
    test01();
}
//  总结： vector赋值方式比较简单，使用operator=，或者assign都可以

