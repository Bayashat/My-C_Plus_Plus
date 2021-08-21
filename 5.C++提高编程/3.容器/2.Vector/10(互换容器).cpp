/*      7 vector互换容器

**功能描述:
    * 实现两个容器内元素进行互换
     
**函数原型：

    * swap(vec);  // 将vec与本身的元素互换

*/
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>&v)
{
    for(vector<int> :: iterator it = v.begin();it!=v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
// 1. 基本使用：
void test01()
{
    // 第一个 vector
    vector<int> v1;       
    for(int i=0;i<10;i++)
    {
        v1.push_back(i);
    }    

    // 第二个vector
    vector<int> v2;       
    for(int i=10;i>0;i--)
    {
        v2.push_back(i);
    }

    cout << "Before:" << endl;  
    printVector(v1) ;     // 0,1,2,3,4,5,6,7,8,9
    printVector(v2) ;     // 10,9,8,7,6,5,4,3,2,1

    cout << "after:" << endl;
    v1.swap(v2);        //互换代码

    printVector(v1) ;    // 10,9,8,7,6,5,4,3,2,1    
    printVector(v2) ;    // 0,1,2,3,4,5,6,7,8,9
}
// 2.实际用途：
// 巧用swap可以收缩内存空间
void test02()
{
    vector<int> v;
    for(int i=0;i<100000;i++)
    {
        v.push_back(i);
    }
    cout << "v's capacity is " << v.capacity() << endl; // 138255
    cout << "v's size is " << v.size() << endl; // 100000

    v.resize(3);    //重新指定大小为3
    cout << "v's capacity is " << v.capacity() << endl;     // 138255: 就算我们把它的大小缩了，但他开的容量并没有小
    cout << "v's size is " << v.size() << endl; // 3
    
    // 巧用swap收缩内存
    vector<int>(v).swap(v);     // vector<int>(v) 是 匿名对象， .swap(v)是与v互换
                                // 我们新开了一个和v一样大小的匿名对象，然后与v互换，之后匿名对象会被系统自动回收
    cout << v.capacity() << endl; // 3
    cout << v.size() << endl; // 3
}
int main()
{
    test02();
}
// 总结：swap可以使两个容器互换，可以达到实用的收缩内存效果