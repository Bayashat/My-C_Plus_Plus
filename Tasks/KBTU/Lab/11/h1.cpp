#include <bits/stdc++.h>
using namespace std;

char f(char c, int x)
{
  int q = 0;
  while(q!=x)
  {
    if(c=='Z')
    {
      c = 'A';
      q++;
    }
    else
    {
      c+=1;
      q++;
    }
  }
  return c;
}
int main()
{
  int n;
  string s;
  cin>> n>>s;
  for(int i=0;i<s.size();i++)
  {
    s[i] = f(s[i],n);
  }
  cout << s;
  return 0;
}