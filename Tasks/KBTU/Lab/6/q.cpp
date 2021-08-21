#include <iostream>
#include<string>
using namespace std;

double PercentOfGirls(double n,double t)
{
    double res = 0;
    res = (t*100)/n;
    return res;
}

int main()
{
    double n,t;
    cin >> n >> t;
    cout << PercentOfGirls(n,t);
    return 0;
}