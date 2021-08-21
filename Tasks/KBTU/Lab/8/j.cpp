#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bigDifference()
{
    vector<int> v;
    int n,x,y;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);    
    }
    sort(v.begin(),v.end());
    
    cout << v[n-1]-v[0];    
    
}
int main() 
{
    bigDifference();
    return 0;
}
