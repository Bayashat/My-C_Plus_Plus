#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n, x, y;
    cin >> n;
    multiset<pair<int, int>> m;
    
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        m.insert(make_pair(x, y));
    }

    for (auto &item : m)
    {
        cout << item.first << " " << item.second << endl;
    }

    return 0;
}
