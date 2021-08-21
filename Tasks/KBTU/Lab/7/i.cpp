#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
long long f(int n, long long sum)
{
    if (n == 0)
        return sum;
    sum = sum + n;
    cin >> n;
    return f(n, sum);
}
int main()
{
    int n;
    cin >> n;
    cout << f(n, 0);
}