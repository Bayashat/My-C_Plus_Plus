/*
        3. Set 容器的输入:

**** Multiset 的输入操作与set一样:

输入方法和数组类似
*/
#include <iostream>
#include <set>
using namespace std;

void test01()
{
    set<int> s;
    int n,x;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        s.insert(x);
    }
}
int main()
{
    test01();

    return 0;
}