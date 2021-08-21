#include<iostream>
#include <iostream>  
using namespace std;    

string uniqueDividor(int n)
{
    string x = "Yes";
    string y = "No";
    if(n==1)
        return x;
    else if(n%2!=0) return y;
    return uniqueDividor(n/2);
}

int main()
{
    int n;
    cin >> n;
    cout << uniqueDividor(n);
   
    return 0;
}