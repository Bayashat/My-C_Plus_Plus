#include <iostream>
#include <algorithm>
using namespace std;

void ReadArray(int *a, int n)
{
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
}
void CoutArray(int *a, int n)
{
    for(int i = 0; i < n; i++) 
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void MergeTwoArray_01(int *a, int *b, int *c, int n, int m)
{
    for (int j = 0; j < n; j++) 
    {
        c[j]=a[j];
    }
    for (int j = 0; j < m; j++) 
    {
        c[j+n] = b[j];
    }

    sort(c,c + (n+m));
}

int main () 
{
    int n; cin >> n;
    int a[n];
    ReadArray(a, n);

    int m; cin >> m;
    int b[m];
    ReadArray(b, m);

    int c[n + m];
    MergeTwoArray_01(a, b, c, n, m);

    CoutArray(c, n + m);

    return 0;
}