#include <iostream>
using namespace std;

int main()
{
    int a,b;

    cin >> a >> b;

    if(a<b)
    {
        cout << (a*2 /b) +1 << endl;
    }
    else if(a>b)
    {
        if(a*2%b==0)
        {
            cout << a*2 /b  << endl;  
        }
        else 
        {
            cout << a*2 /b+1 << endl;
        }   
    }
    return 0;
}