#include <iostream>
#include <map>
using namespace std;


void test01()
{
    map<string,string>m;
    m.insert(make_pair("apple","5"));
    m.insert(make_pair("apple2","6"));
    m["orange"] = "6";

    map<string,string> :: iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout << (*it).first << "->" << (*it).second << endl;
    }

    cout << m["apple"] << endl;
    cout << m["apple2"] << endl; //会输出对应的value
    cout << m["apple3"] << endl;  // 若没有该value,因为是string类，所以会输出 空格
}
int main()
{
    test01();

    return 0;
}