#include <iostream>
#include<string>
#include <cmath>
using namespace std;
int Almat(int n)
{
    if(n==0) return 0;
    return Almat(n/10)+n%10/2;
    
}
int main()
{
    int n;
    cin >> n;
    cout << Almat(n);
}
