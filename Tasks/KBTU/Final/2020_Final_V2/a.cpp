#include <bits/stdc++.h>
using namespace std;

vector<int> vv;

int f(int total,int x,vector<int> v) 
{
  if(total<x)
  {
    return -1;
  }
  else
  {
    for(int i=6;i>0;i--)
    {
      if(x>=vv[i] && v[i]!=0)
      {
        while (x>=vv[i])
        {
          x -= vv[i];
          total -= vv[i];
        }
      }
    }
  }
  if(x==0) return total;
  else return -1;
}
int main()
{
  vv.push_back(1);
  vv.push_back(2);
  vv.push_back(5);
  vv.push_back(10);
  vv.push_back(20);
  vv.push_back(50);
  vv.push_back(100);
  vector<int> v,v2;
  int total = 0;
  for(int i=0;i<7;i++)
  {
    int x; cin>>x;
    int d = x*vv[i];
    v.push_back(x);
    total += d;
  }
  int n; cin>> n;
  for(int i=0;i<n;i++)
  {
    int x; cin>>x;
    v2.push_back(x);
  }
  for(int i=0;i<v2.size();i++)
  {
    if(f(total,v2[i],v)==-1)
    {
      cout << "Transaction stopped!" << endl;
    }
    else
    {
      total = f(total,v2[i],v);
      cout << "Transaction accepted!"<<endl;
    }
  }
  return 0;
}