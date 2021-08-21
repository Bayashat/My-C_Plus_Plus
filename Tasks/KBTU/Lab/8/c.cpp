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
    int l,r;
    cin >> l >> r;
    reverse(v.begin()+l,v.begin()+r+1);
    /*
    for(int i=l;i<r;i++)
    {
        int temp = v[i];
        v[i] = v[r];
        v[r] = temp;
        r--;
    }
    */
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
