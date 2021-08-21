/*
        3. 遍历 Map 容器:

********* :  Multimap 的遍历操作 与Map一样

 1. 使用迭代器
 2. 使用 auto

*/
#include <iostream>
#include <map>
using namespace std;

void printMap01(map<int,int> &m)
{
    for(map<int,int>::iterator it = m.begin();it != m.end();it++)
    {
        cout << "key= " << (*it).first << " value= " << it->second << endl;
    }
    cout << endl;
}
  
void printMap02(map<int,int> &m)
{
    for(auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }
}
int main()
{
    map<int,int> m;

    m.insert(1, 10);  
    m.insert(pair<int,int>(3,30));  
    m.insert(make_pair(2, 20));   
    m.insert(map<int,int>::value_type(4,40));
    m[5] = 50;
    
    // 1. 使用迭代器:
    printMap01(m);

    // 2.使用 auto:
    printMap02(m);
    
    return 0;
}
