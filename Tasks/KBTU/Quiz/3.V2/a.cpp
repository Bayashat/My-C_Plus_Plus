#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> m;
    vector<int> v;
    int n, k, x;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        m[x]++;
    }
    cin >> k;
    for(int i = 0; i < k; i++)
    {
        cin >> x;
        v.push_back(m[x]);
    }
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

}