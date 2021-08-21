#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

long long SumOfVector(vector<int> v)
{
  long long sum = 0;
  for(int i=0;i<v.size();i++)
  {
    sum += v[i];
  }
  return sum;
}
bool f(vector<int> a , vector<int> b)
{
  if(SumOfVector(a)==SumOfVector(b))
  {
    if(a.size()==b.size())
    {
      if(a[0]==b[0]) return true;
      return a[0]<b[0];
    }
    return a.size()<b.size();
  }
  return SumOfVector(a)<SumOfVector(b);
}

int main()
{
  int n; cin >> n;
  vector <vector<int> > vec;
  // filling
  for(int i=0;i<n;i++)
  {
    int m; cin >> m;
    vector<int> v1;
    for(int i=0;i<m;i++)
    {
      int x; cin >> x;
      v1.push_back(x);
    }
    vec.push_back(v1);
  }

  sort(vec.begin(),vec.end(),f);

  for(int i=0;i<vec.size();i++)
  {
    for(int j=0;j < vec[i].size();j++)
    {
      cout << vec[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}