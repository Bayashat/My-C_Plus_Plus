/*      4. vector容量和大小

    功能描述:

* 对vector容器的容量和大小操作
* 在 vector 中，它会多储备容量，容量会大于等于大小

    函数原型:
* empty();                         /判断容器是否为空

* capacity();                      //容器的容量

* size();                          //返回容器中元素的个数

* resize(int num);             //重新指定容器的长度为num，若容器变长，则以默认值(0)填充新位置。

  ​					 //如果容器变短，则末尾超出容器长度的元素被删除。

* resize(int num, elem);  //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。

  ​				       //如果容器变短，则末尾超出容器长度的元素被删除。
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
void test01()
{
    vector<int> v1;       

    for(int i=1;i<=10;i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    // 1.判断是否为空
    if(v1.empty())   // 为真，则代表为空
        cout << "Is empty " << endl;
    else
        cout << "Isn't empty " << endl;
        cout << "v1's capacity is " << v1.capacity() << endl; // 13
        cout << "v1's size is " << v1.size() << endl; // 10

    // 2. 重新指定大小(resize)：
    v1.resize(15);
    printVector(v1);     // 如果重新指定的比以前长了，默认以0填充新的位置: 1,2,3,4,5,6,7,8,9,10,0,0,0,0,0 

    // 3. 重新指定大小，以指定的值：
    v1.resize(15,100);    // 利用重载版本，可以指定默认填充值，参数2
    printVector(v1); //  1,2,3,4,5,6,7,8,9,10,100,100,100,100,100

    v1.resize(5);    
    printVector(v1);   // 如果重新指定的比以前短了，超出部分会删掉 : 1,2,3,4,5
}
int main()
{
    test01();
}
/*
总结：
* 判断是否为空  --- empty
* 返回元素个数  --- size
* 返回容器容量  --- capacity
* 重新指定大小  ---  resize
*/
