#include <iostream>
#include <map>
using namespace std;


void test01()
{

    map<string,int>m;

    m["orange"] = 6;
    m.insert(make_pair("apple",5));
    m.insert(make_pair("apple2",6));
    
    map<string,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout << (*it).first << "->" << (*it).second << endl;
    }

    cout << m["apple"] << endl; //会输出对应的value
    cout << m["apple3"] << endl;  // 若没有该value,因为是int类，所以会输出 0
}
int main()
{
    test01();

    return 0;
}
