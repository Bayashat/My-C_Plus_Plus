/*          2.  map构造和赋值

********* :  Multimap 的构造和赋值操作 与Map一样

**功能描述: 

    * 对map容器进行构造和赋值操作

**函数原型:

** 构造: 
    * 1. map<T1, T2> mp;                 map默认构造函数: 
    * 2. map(const map &mp);             拷贝构造函数

** 赋值: 
    * map& operator=(const map &mp);    重载等号操作符
    
*/
#include <iostream>
#include <map>
using namespace std;

void printMap(map<int,int> &m)
{
    for(map<int,int>::iterator it = m.begin();it != m.end();it++)
    {
        cout << "key= " << (*it).first << " value= " << it->second << endl;
    }
    cout << endl;
}

void test01()
{
// 1.map默认构造函数：

    // 创建map容器：
    map<int,int> m;
    // 插入: 

    m.insert(1, 10);    // key值是 1, value值是 10;
    m.insert(pair<int,int>(3,30));  
    m.insert(make_pair(2, 20));     // 可以随便插, 反正会自动排序
    m.insert(map<int,int>::value_type(4,40));
    m[5] = 50;

    // 输出：
    printMap(m);   

// 2.拷贝构造函数: 
    map<int,int>m2(m);
    printMap(m2);

// 3.赋值: 
    map<int,int>m3;
    m3 = m2;
    printMap(m3);

    m[5] = 50;  // 可这样赋值
}
int main()
{
    test01();

    return 0;
}
//  总结：map中所有元素都是成对出现，插入数据时候要使用对组
