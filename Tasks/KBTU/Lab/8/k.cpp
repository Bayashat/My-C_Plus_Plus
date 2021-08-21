#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void SumofKlargest()
{
    vector<int> v;
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> y;
    int cnt = 0;
    sort(v.begin(), v.end());
    for (int i = n - 1; y != 0; i--)
    {
        cnt += v[i];
        y--;
    }
    cout << cnt << endl;
}
int main()
{
    SumofKlargest();
    return 0;
}