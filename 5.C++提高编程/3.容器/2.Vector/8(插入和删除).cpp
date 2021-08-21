/*      5. vector插入和删除

**功能描述:

* 对vector容器进行插入, 删除操作

**函数原型:

 1. push_back(ele);                                         //尾部插入元素ele
 2. pop_back();                                                //删除最后一个元素
 3. insert(const_iterator pos, ele);        //迭代器指向位置pos前插入元素ele
 4. insert(const_iterator pos, int count,ele);//迭代器指向位置pos前插入count个元素ele
 5. erase(const_iterator pos);                     //删除迭代器指向的元素
 6. erase(const_iterator start, const_iterator end);//删除迭代器从start到end之间的元素
 7. clear();                                                        //删除容器中所有元素
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
    vector<int> v;       
    // 1.尾插：
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    printVector(v);     // 10,20,30,40

    // 2.尾删：
    v.pop_back();
    printVector(v);     // 10,20,30

    // 3.1 插入: 会往指定位置 前 插:
    v.insert(v.begin(),100);  
    printVector(v);     // 100,10,20,30

    v.insert(v.begin()+2, 512); // 可以用迭代器任意插
    printVector(v);     // 100 10 512 20 30

    v.insert(v.end(), 450); // 还能插后面:
    printVector(v); // 100 10 512 20 30 450

    // 3.2 插入n个elem:
    v.insert(v.begin(),2,1000);
    printVector(v);     // 1000, 1000, 100, 10, 20, 30

    // 4.1.删除：
    v.erase(v.begin());
    printVector(v);     // 1000, 100, 10, 20, 30

    // 4.2.删除区间：
    v.erase(v.begin(),v.end()); // 清空了
    printVector(v);     // 

    // 5.清空：
    v.clear();
    
}

int main()
{
    test01();
}
/*
总结：
* 尾插  --- push_back
* 尾删  --- pop_back
* 插入  --- insert    (位置迭代器)
* 删除  --- erase  （位置迭代器）
* 清空  ---  clear  
*/