#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

long long i = -1;
long long f()
{
    i++;
    long long ans = 1;
    for (long long j = 0; j < i; j++)
    {
        ans *= i;
    }
    return ans;
}
int main()
{
    long long n;
    cin >> n;
    vector<long long> v(n + 1);
    generate(v.begin(), v.end(), f);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}