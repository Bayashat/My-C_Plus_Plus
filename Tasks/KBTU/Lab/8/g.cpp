#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n, m;
    cin >> n;
    int cnt = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cin >> m;
    for (int i = 0; i < v.size(); i++)
    {
        if (isPrime(v[i]) == true && v[i] >= m)
        {
            cnt++;
        }
    }
    cout << cnt;
}