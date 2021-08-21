//      例题-1.    需要在输入的句子中统计每个字符串出现了几次？(句子会在输入 “end” 后停止输入)
#include <iostream>
#include <map>
using namespace std;


void test01()
{
    map<string,int> m;
    string s;

    while(1)
    {
        cin >> s;
        if(s=="end") break;
        m[s]++;
    }

    map<string,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout << (*it).first << "->" << (*it).second << endl;
    }
}
int main()
{
    test01();

    return 0;
}
