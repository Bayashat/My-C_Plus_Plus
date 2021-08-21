#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void UniqueElements()
{
    set<int> s;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << endl;
}
int main()
{
    UniqueElements();
    return 0;
}