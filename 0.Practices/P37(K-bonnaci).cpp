/*              22. K-bonanci       取自 Quiz-3 v2 - D

使用递归:
k-bonacci sequence given as follows a(i) = a(i-2) + k * a(i-1), where a1 = 0 and a2 = 1. You’re given numbers
k and m. Print the last digit of m-th term of k-bonacci sequence. SOLVE ONLY USING RECURSION

1 7 : 8
1 8 : 3
2 10: 5
*/
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


int f(int x,int y)
{
    if(y==1)
    {
        return 0;
    }
    if(y==2)
    {
        return 1;
    }
    return f(x,y-2) + x*f(x,y-1);
}
int main()
{
    int x,y;
    cin >> x >> y;
    int d = f(x,y);
    if(d<0)
    {
        d = d *(-1);
    }
    cout << d%10;
    
    return 0;
}