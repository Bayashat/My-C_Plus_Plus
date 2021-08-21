#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    map<int, int> m; // key---our number. value----count of number
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    cout << m[k];
    return 0;
}