/*      5. set插入和删除

**** Multiset 的插入和删除操作与set一样

**功能描述: 
    * set容器进行插入数据和删除数据:
**函数原型: 

*  insert(elem);           //在容器中插入元素。
*  clear();                //清除所有元素
*  erase(pos);             //删除pos迭代器所指的元素，返回下一个元素的迭代器
*  erase(beg, end);    //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
*  erase(elem);            //删除容器中值为elem的元素

*/
#include <iostream>
#include <set>
using namespace std;

// 打印函数:
void printSet(set<int> &s)  
{
    for(set<int> :: iterator it = s.begin();it!= s.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    set<int> s1;
    // 1.插入
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    printSet(s1);   // 10 20 30 40 

    // 2.删除：
    s1.erase(s1.begin());   // 删掉了第一个元素；
    s1.erase(s1.end()); 
    printSet(s1);   // 20 30 

    s1.erase(s1.begin()+2); // 按迭代器的话,只能删头或尾

    // 2.1 删除重载版本：
    s1.erase(30);   
    printSet(s1);   // 20 
    
    // 3. 清空：
    s1.clear();
    printSet(s1);   // 

    // 3.1. 也可以用 erase 清空：
    s1.erase(s1.begin(),s1.end());  // 
    
}

int main()
{
    test01();
}
/*
    总结:
插入 --- insert
删除 --- erase
清空 --- clear
*/