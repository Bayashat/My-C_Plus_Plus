/*      P5. Star triangle:  取自Lab_4 - E

给定数字, 为直角三角形的 长
比如:
                [*]
     5:         [*][*]
                [*][*][*]
                [*][*][*][*]
                [*][*][*][*][*]
*/
#include <iostream>
using namespace std;

int main () 
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j< i+1; j++) 
        {
            cout << "[*]";
        }
        cout << endl;
    }
    
    return 0;
}