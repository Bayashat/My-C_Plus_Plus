/*

        5.  list 插入和删除

功能描述:
    对list容器进行数据的插入和删除

函数原型: 
    push_back(elem);    //在容器尾部加入一个元素
    pop_back();         //删除容器中最后一个元素
    push_front(elem);   //在容器开头插入一个元素
    pop_front();        //从容器开头移除第一个元素
    insert(pos,elem);   //在pos位置插elem元素的拷贝，返回新数据的位置
    insert(pos,n,elem); //在pos位置插入n个elem数据，无返回值。
    insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值。
    clear();            //移除容器的所有数据
    erase(beg,end);     //删除[beg,end)区间的数据，返回下一个数据的位置。
    erase(pos);         //删除pos位置的数据，返回下一个数据的位置。
    remove(elem);       //删除容器中所有与elem值匹配的元素

*/
#include <iostream>
#include <list>
using namespace std;

void printList(const list<int> &L)
{
    for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    list<int> L;
    // 1.尾插
    L.push_back(10);
    L.push_back(20);
    L.push_back(30);   
    // 2.头插
    L.push_front(100);
    L.push_front(200);
    L.push_front(300);
    printList(L);   // 300 200 100 10 20 30
    // 3.尾删
    L.pop_back();
    printList(L);   // 300 200 100 10 20 
    // 4.头删
    L.pop_front();
    printList(L);   // 200 100 10 20

    // 5. insert 插入
    L.insert(L.begin(), 1000);
    printList(L);    // 1000 200 100 10 20

    // 6. insert 用 iterator 插指定位置:
    list<int>::iterator it = L.begin();
    L.insert(++it, 2000);
    printList(L);   // 1000 2000 200 100 10 20

    // 7.删除
    it = L.begin();
    L.erase(++it);
    printList(L);   // 1000 200 100 10 20

    // 8.移除
    L.push_back(10000);
    L.push_back(10000);
    L.push_back(10000);
    printList(L);   // 1000 200 100 10 20 10000 100000 100000

    L.remove(10000);
    printList(L);   // 1000 200 100 10 20

    // 9.清空
    L.clear();
    printList(L);   // 
}
int main()
{
    test01();

    return 0;
}
/*
总结:
    尾插 --- push_back
    尾删 --- pop_back
    头插 --- push_front
    头删 --- pop_front
    插入 --- insert
    删除 --- erase
    移除 --- remove
    清空 --- clear
*/