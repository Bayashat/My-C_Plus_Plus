//      例题-2.    需要在输入的句子中统计出现了n次的字符串是哪个？(句子会在输入 “end” 后停止输入)
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
    int n;
    cin >> n;

    bool found = false;
    map<string,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        if((*it).second==n)
        {
            cout << (*it).first << endl;
            found = true;
            break;
        }
    }
    if(!(found))
        cout << "not found"  << endl;
}

int main()
{
    test01();

    return 0;
}
