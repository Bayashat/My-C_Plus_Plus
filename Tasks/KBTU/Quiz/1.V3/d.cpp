#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Usual division: " << (double)a / b << endl;
    cout << "Division without remainder: " << a / b << endl;
    cout << "Remainder: " << a % b;

    return 0;
}