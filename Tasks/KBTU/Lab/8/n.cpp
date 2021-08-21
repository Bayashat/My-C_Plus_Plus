#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void Removeevens()
{
    set<int> s;
    int n,x;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        s.insert(x);    
    }

    for(set<int> :: iterator it = s.begin();it!=s.end();it++)
    {
        if(*it%2==1)
            cout << *it << " ";
    } 
}
int main() 
{
    Removeevens();
    return 0;
}