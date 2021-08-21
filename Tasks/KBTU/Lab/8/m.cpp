#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void SumOfUniques()
{
    set<int> s;
    int n,x;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        s.insert(x);    
    }
    int cnt = 0;
    for(set<int> :: iterator it = s.begin();it!=s.end();it++)
    {
        cnt += *it ;
    }
    cout << cnt << endl;
}
int main() 
{
    SumOfUniques();
    return 0;
}
