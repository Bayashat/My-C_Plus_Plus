#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;
    cin >> n;

    double x = sqrt(n);

    int y = x;
    
    if(y*y == n)
    {
        cout << "Yes" << endl;
    }
    else 
    {
        cout << "No" << endl;
    }
    return 0;
}