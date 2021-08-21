#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPrime(int *x)
{
    for(int i = 2; i < *x; i++)
    {
        if(*x %i == 0)
            return false;
    }
    return true;
}
void prime(vector<int> *v)
{
    for(int i = 2; v->size()<1000; i++)
    {
        if(isPrime(&i)) v->push_back(i);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    prime(&v);
    cout << v[n-1];

    return 0;
}