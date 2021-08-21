/*      P6. Dots or number:     取自 Lab_4 - G

例子:
            ...1            ....1
    4:      ..2.        5:  ...2.
            .3..            ..3..
            4...            .4...
                            5....
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << ".";
        }
        cout << i + 1;
        for (int j = 0; j < i; j++)
        {
            cout << ".";
        }
        cout << endl;
    }
    return 0;
}