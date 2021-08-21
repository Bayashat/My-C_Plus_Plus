#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector< int> v;
  int n;
  cin >> n;
  for(int i=0;i<n;i++)
  {
    int t;
    cin>>t;
    v.push_back(t);
  }

  if(all_of(v.begin(),v.end(),[](int element) { return element %2 == 0; }))
  {
    cout << "All the elements are even";
  }
  else
  {
    cout << "NOt all the numbers are even";
  }
}