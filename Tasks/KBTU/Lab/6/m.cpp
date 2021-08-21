#include <iostream>
#include <algorithm>
using namespace std;

void readArray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
}

void reverse(int *a,int n)
{
    int x = 0, y = n-1;
    while(x<y)
    {
        int temp = a[x];
        a[x] = a[y];
        a[y] = temp;
        x++;
        y--;
    }
}
void print(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " " ;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    readArray(a,n);
    //reverse(a, a+n);
    reverse(a,n);
    print(a,n);
}