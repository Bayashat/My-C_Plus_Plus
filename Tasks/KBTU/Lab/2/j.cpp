#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int t=0;

    int x = 0;

    for(int i = 0; i < n; ++i)
    {
        cin >> t;
        while(t > 0)
        {
            if(t % 10 == 0)
            {
                x++;
            }
            t = t / 10;
        }
    }

    cout << x << endl;

    return 0;
}