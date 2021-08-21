#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  int n; cin >> n;
  vector<int> v;
  for(int i=0;i<n;i++)
  {
    int x;
    cin >> x;
    v.push_back(x);
  }
  vector<int> v2(v);
  reverse(v.begin(),v.end());
  for(int i=0;i<v.size();i++)
  {
    if(v2[i]==v[i])
    {
      cout << "OK" << endl;
    }
    else
    {
      cout << "Instead of" << " " <<  v2[i] << " " << "here was" << " " << v[i] << endl;
    }
  }
  return 0;
}