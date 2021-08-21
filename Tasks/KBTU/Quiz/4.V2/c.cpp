#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;



void prime(int n)
{
  bool isprime;
  int a[100001],x=1;
  for(int i=2;i<100001;i++)
  {
    isprime = true;
    for(int j=2;j<i;j++)
    {
      if(i%j==0) 
      {
        isprime = false;
        break;
      }
    }
    if(isprime)
    {
      a[x] = i;
      x++;
    }
  }

  for(int i=1;i<100001;i++)
  {
    if(i)
  }
}
int main()
{
  int n;
  cin >> n;
  prime();

  return 0;
}