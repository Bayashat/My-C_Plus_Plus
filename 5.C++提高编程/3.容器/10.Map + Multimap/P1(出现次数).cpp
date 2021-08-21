/*
        P1. 出现次数

给定text, 末尾会以 break 结束.
需要在给定的text 里 输出 每个 词 出现了几次? 

例如 : Messages is a simple, helpful messaging app that keeps you connected with the people who matter most break
*/
#include <iostream>
#include <map>
using namespace std;

void test01()
{
    map<string, int> m;
    string s;
    while (1)
    {
        if (s == "break")
            break;
        cin >> s;
        m[s]++;
    }
    for (map<string, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << "->" << (*it).second << endl;
    }
}
int main()
{
    test01();
}