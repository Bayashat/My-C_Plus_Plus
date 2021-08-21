#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;


int main()
{
  int n; cin >> n;
  int sum=0;
  map<string,int> ma;
  for(int i=0;i<n;i++)
  {
    int m; cin >> m;
    for(int j=0;j<m;j++)
    {
      string s; cin >> s;
      int x; cin >> x;
      ma[s]+=x;
      sum+=x;
    }
  }

  for(map<string,int>::iterator it = ma.begin(); it!=ma.end();it++)
  {
    double procent;
    procent = double(it->second)*100/sum;
    cout << it->first << " " << procent << endl;
  }
  return 0;
}