#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool f(int x)
{
  if(x<2) return false;
  for(int i=2;i<x;i++)
  {
    if(x%i==0) return false;
  }
  return true;
}
int main()
{
  int n;
  cin >> n ;
  vector<int> v;
  for(int i=0;i<n;i++)
  {
    int x;
    cin >> x;
    if(x<0) 
      x = x*-1;

    v.push_back(x);
  }
  int num = count_if(v.begin(),v.end(),f);
  cout << num;
  return 0;
}