#include <iostream>
using namespace std;

bool BinarySearch(int *a, int n, int x, int i)
{
    if(i == n) 
        return false;

    if(a[i] == x)
        return true;
    return BinarySearch(a, n, x, i+1);
}
int main()
{  
    int n, x;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    } 
    cin >> x;
    cout << (BinarySearch(a, n, x, 0) ? "Yes" : "No");

    return 0;
}