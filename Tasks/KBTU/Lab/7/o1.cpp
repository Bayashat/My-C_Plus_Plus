#include<iostream>
#include <sstream>  
#include <algorithm>
using namespace std;    

char ith(int n)
{
    if(n<10)
        return char(n+'0');
    return('A'-10+n);
}
void to_k_nary(int n,int k)
{
    if(n==0)
        return;
    to_k_nary(n/k,k);
    cout << ith(n%k);

}

int main()
{
    int n,k;
    cin >> n >> k;
    to_k_nary(n,k);
    
    return 0;
}