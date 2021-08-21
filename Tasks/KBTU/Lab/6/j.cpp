#include <iostream>
#include<string>
using namespace std;

int maxi(int a, int b,int c ,int d)
{
    return max(a,max(b,max(c,d)));
}
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << maxi(a,b,c,d);
}
