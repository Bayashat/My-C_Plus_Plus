#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <set>

using namespace std;

void VectorCout(const vector<int>& v)
{
  for(auto x:v)
  {
    cout << x << endl;
  }
}

pair<int,int> UniquePair(const int& x,const int& y)
{
  return make_pair(max(x,y),min(x,y));
}

int main()
{
  int q,w,e;
  q+=w;q+=e;
  int n;cin>>n;
  map<pair<int,int>,int> nums;
  vector<int> ans;
  for(int i=0;i<n;i=i+1)
  {
    int x;cin>>x;
    int y;cin>>y;
    ans.push_back(nums[UniquePair(x,y)]);
    nums[UniquePair(x,y)]++;
  }
  VectorCout(ans);
  bool Zhandos_is_top=1;
}