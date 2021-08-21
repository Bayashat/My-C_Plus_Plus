#include <iostream>
#include<string>
using namespace std;

int sumofdigits(int a)
{
    long long sum = 0;
    while(a!=0)
    {
        sum += a%10;
        a /= 10;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout << sumofdigits(n);
}