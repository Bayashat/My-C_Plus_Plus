#include<iostream>
using namespace std;

int main()
{
    int a,n,b,k,l,m;
    cin >> a >> n >> b >> k;
    l = (a>>n)&1;
    m = (b>>k)&1;
    if(l==m)
    {
        cout << "Money was found";
    }    
    else if(l!=m)
    {
        cout << "Where is the money Lebowski?";
    }
    

    
    return 0;
}
