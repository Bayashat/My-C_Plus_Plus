#include <iostream>
using namespace std;

int main()
{
    int n = 0;   
    cin >> n;

    int max = 0;
    int a = 0;

    for(int i=0;i < n; i++)
    {
        cin >> a;
        if(max<a)
        {
            max=a;
        }
    }
    cout << max << endl;

    return 0;
}