#include <iostream>
#include<string>
using namespace std;

char toup(char c)
{

    return toupper(c);
}

int main()
{
    char c;
    cin >> c;
    cout << toup(c);
    return 0;
}