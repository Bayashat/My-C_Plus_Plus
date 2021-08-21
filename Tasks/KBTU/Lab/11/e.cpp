#include <bits/stdc++.h>
using namespace std;

string f(string s1, string s2)
{
    string sss = "";
    int x = min(s1.size(), s2.size());
    if (s1.size() > s2.size())
    {
        swap(s1, s2);
    }
    for (int i = 0; i < x; i++)
    {
        if (s2.find(s1[i]) != string::npos)
        {
            sss += s1[i];
        }
    }
    return sss;
}

int main()
{
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    string s7 = f(v[0], v[1]);
    for (int i = 2; i < n; i++)
    {
        s7 = f(s7, v[i]);
    }
    if (s7.empty())
    {
        cout << "NO COMMON CHARACTERS";
        return 0;
    }
    set<char> c;
    for (int i = 0; i < s7.size(); i++)
    {
        c.insert(s7[i]);
    }
    for (set<char>::iterator it = c.begin(); it != c.end(); it++)
    {
        cout << (*it) << " ";
    }
    return 0;
}