#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    vector<string> v;
    map<string ,int> m;
    int n;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        if(m[s] == 0)
        {
            m[s]++;
        }
        else
        {
            bool res = true;
            for(int i = 0; i < v.size(); i++)
            {
                if(v[i] == s)
                {
                    res = false;
                    break;
                }
            }
            if(res)
                v.push_back(s);
        }
    }
    if(v.empty())   cout << "Understandable, have a great day";
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    

    return 0;
}