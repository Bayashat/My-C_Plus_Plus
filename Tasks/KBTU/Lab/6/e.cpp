#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double hyp(int num1, int num2)
{
    double c = sqrt(num1*num1 + num2*num2);
    
    return c;
}

int main()
{
    int x,y;
    cin >> x >> y;
    cout <<  setprecision(4) << hyp(x,y);
    
    return 0;
}