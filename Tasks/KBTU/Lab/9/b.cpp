#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> even;
    vector<int> odd;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            even.push_back(x);
        else
            odd.push_back(x);
    }
    
    sort(even.rbegin(), even.rend());
    sort(odd.begin(), odd.end());

    for (int i = 0; i < even.size(); i++)
    {
        cout << even[i] << " ";
    }
    for (int i = 0; i < odd.size(); i++)
    {
        cout << odd[i] << " ";
    }
    return 0;
}