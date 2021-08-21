/*
        P5. Binary Search   : 取自 Lab_7 - C

给定包含 n 个数的数组 和数字 x. 需要以递归的方式找x是否在数组里
*/
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