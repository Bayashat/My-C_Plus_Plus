#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void test01()
{
    int n,x;
    cin >> n;

    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }

    reverse(v.begin(),v.end());
    for(vector<int> :: iterator it = v.begin();it!=v.end();it++)
    {
        cout << *it << " ";
    }
}
int main()
{
    test01();

    return 0;
}

