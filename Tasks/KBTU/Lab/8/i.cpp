#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n,x,m;
    vector<int> v;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> m;
    for(int i=0;i<n;i++)
    {
        if(v[i]==m)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}
