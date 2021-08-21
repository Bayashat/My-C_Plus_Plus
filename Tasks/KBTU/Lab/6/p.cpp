#include <iostream>
#include<string>
using namespace std;

int Positive(int n)
{
    if(n>=0)
    {
        return n;
    }
    else
    {
        return (n*-1);
    }
    
}

int main()
{
    int n;
    cin >>n;
    cout << Positive(n);
    return 0;
}