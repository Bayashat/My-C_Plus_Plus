#include <iostream>
#include <map>
#include <string>
using namespace std;

void test()
{
    int n;
    cin >> n;
    map<string,int> m;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        m.insert(make_pair(s,i+1));
    }

    map<string,int>:: iterator it;
    for(it=m.begin();it!=m.end();it++)
    {

        cout << (*it).first << " " << (*it).second << endl;
    }
}
int main()
{
    test();
    return 0;
}
