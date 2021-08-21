#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    if(a==0)
    {
        cout << "None" << endl;
    }
    else if( a % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
    

    return 0;
}