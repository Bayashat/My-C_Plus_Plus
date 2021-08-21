//   例题 2  数的阶乘的直接递归案例
#include<iostream>  
using namespace std;    

int factorial(int n)  
{   
    if(n<=1)  
        return(1);  /*Terminating condition*/  
    else  
    {  
        return(n*factorial(n-1));      
    }
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}