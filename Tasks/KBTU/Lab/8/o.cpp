#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void SortLetters()
{
    string s;
    cin >> s;
    set<char> c;
    for (int i = 0; i < s.size(); i++)
    {
        c.insert(tolower(s[i]));
    }
    cout << c.size() << endl;
    for (set<char>::iterator it = c.begin(); it != c.end(); it++)
    {
        cout << *it << " ";
    }
}
int main()
{
    SortLetters();
}