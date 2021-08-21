#include <bits/stdc++.h>
using namespace std;

bool f(string s)
{
  for(int i=0,x=s.size()-1;i<x;i++,x--)
  {
    if(s[i]!=s[x]) return false;
  }
  return true;
}
int main()
{
  string s; cin>>s;
  sort(s.begin(),s.end());
  do
  {
    if(f(s))
    {
      cout << "ZA WARUDO TOKI WO TOMARE";
      return 0;
    }
  } while (next_permutation(s.begin(),s.end()));
  
  cout << "JOJO";
  return 0;
}