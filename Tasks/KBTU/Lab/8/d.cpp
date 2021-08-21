#include <iostream>
#include <vector>
using namespace std;

void test01()
{
    vector<int> v;
    int n,x,y;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> y;
    v.erase(v.begin()+y);
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    test01();
}
