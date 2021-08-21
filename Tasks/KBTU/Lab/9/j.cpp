#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        int n;
        cin >> s >> n;
        m[s] += n;
    }
    map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
