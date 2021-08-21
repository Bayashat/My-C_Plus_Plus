        // 例题
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void example1()     // 给vector数，输入0是会停
{
    vector<int> v;
    int x;

    while(1)
    {
        cin >> x;
        if(x!=0) v.push_back(x);
        else break;
    }

    cout << v.size() << endl;

    for(int i=0;i<v.size();i++)
    {
        cout << v[i]<< " ";
    }
}

void example2()     // 输出二维vector
{
    vector<vector<int> > v;
    vector<int> t;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            t.push_back(j);
        }
        v.push_back(t);
        t.clear();    //可以每次都将里面清理
    }

    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout << v[i][j]<< " ";
        }
        cout << endl;
    }
}

void example3()     // 用 iterator 输出
{
    vector<int> v;
    int x;

    while(1)
    {
        cin >> x;
        if(x!=0) v.push_back(x);
        else break;
    }

    cout << v.size() << endl;

    vector<int> :: iterator it;     //创建叫it的iterator

    for(it = v.begin();it!=v.end();it++)
    {
        cout << (*it) << " ";
    }
}

int main() {

	example2();

	return 0;
}