/*          21. 计算器          取自 Quiz-3 v2 - C

3
+
a 2 b 3             a + b = 5
-
x 3 y 1             x - y = 2
*
y 1 z 5             y * z = 5
*/
#include <bits/stdc++.h>
using namespace std;

int f(int a, int b, char c)
{
    if (c == '+')
        return a + b;
    else if (c == '-')
        return a - b;
    else if (c == '*')
        return a * b;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> v;
    for (int i = 0; i < n; i++)
    {
        char c, a, b;
        int x, y;
        cin >> c >> a >> x >> b >> y;
        string q = " ";
        string s = a + q + c + q + b + q;
        int r = f(x, y, c);
        v.push_back(make_pair(s, r));
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << "= " << v[i].second << endl;
    }
    return 0;
}
