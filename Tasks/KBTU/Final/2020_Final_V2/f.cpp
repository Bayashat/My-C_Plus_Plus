#include <bits/stdc++.h>
using namespace std;
int Perevert(int x)
{
   int y = 0;
   while(x)
   {
       y = y*10 + x%10;
       x /= 10;
   }
   return y;
}
int main()
{
    int n;
    cin >> n;
    vector <int> v;
    vector <string> vs;
    for(int i=0; i<n; i++)
    {
        string x, y;
        cin >> x >> y;
        int xx=0, yy=0, sum;
        reverse(x.begin(), x.end());
        reverse(y.begin(), y.end());
        for(int i=0; i<x.size(); i++)
        {
            xx=xx*10+(int)(x[i]-'0');
        }
        for(int i=0; i<y.size(); i++)
        {
            yy=yy*10+(int)(y[i]-'0');
        }
        sum=xx+yy;
        v.push_back(sum);
    }
    for(int i=0; i<v.size(); i++)
    {
        v[i]=Perevert(v[i]);
        cout << v[i] << endl;
    }
    return 0;
}