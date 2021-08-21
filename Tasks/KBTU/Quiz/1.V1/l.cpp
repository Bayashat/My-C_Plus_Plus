#include <iostream>
using namespace std;

int main()
{
    int n,i=1;
    cin >> n;
    if(n==1)
    {
        cout << "0";
        return 0;    
    }
    while(i*2%n!=0)
    {
        i=i+1;
    }
    cout << i ;

    return 0;
    
}
