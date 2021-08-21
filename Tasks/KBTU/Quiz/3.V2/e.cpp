#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


int div(int x)
{
  int cnt=0;
  for(int i=1;i<x;i++)
  {
    if(x%i==0) 
      cnt++;
  }
  return cnt;
}
int f(int n)
{
  int orig = n;
  if(n==1) return 1;
  int maxi = -1e9-1;
  for(int i=1;i<n;i++)
  {
    if(n%i==0)
    {
      if(i>maxi)
      {
        maxi = i;
      }
    }
  }
  n = maxi;
  return div(orig) + f(n);
}
int main()
{
  int n; cin>>n;
  cout << f(n);

    return 0;
}