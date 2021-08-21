//     例题 4  找a的n次方
#include <iostream>
using namespace std;
 
int degree(int a, int n)
{
    if(n==0) return 1;
    return degree(a,n-1)*a;
}
 
int  main()
{
    int a, n;
    cin >> a >> n;
    cout << degree(a, n);
    
    return 0;
}