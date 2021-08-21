#include <iostream>
#include <set>

using namespace std;

int main()
{
    int q;
    cin >> q;
    set<string> numbers;

    for (int i = 0; i < q; ++i)
    {
        string s;
        cin >> s;
        numbers.insert(s);
    }
    cout << numbers.size();

    return 0;
}