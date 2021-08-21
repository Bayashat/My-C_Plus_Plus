#include<iostream>  
using namespace std;    

int f(int a,int n)  
{
    if(n==0) return 1;

    return f(a,n-1) * a;
}

int main()
{
    int x;
    cin >> x;
    cout << f(2,x);
    return 0;
}