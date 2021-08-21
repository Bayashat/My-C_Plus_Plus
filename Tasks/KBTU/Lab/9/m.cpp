#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

void test()
{
    int n;
    cin >> n;
    string s[n];
    queue<string> q;

    for (int i = 0; i < n; i++)
    {
        int x;
        string s1;
        cin >> x;
        if (x == 2)
        {
            q.pop();
        }
        else
        {
            cin >> s1;
            q.push(s1);
        }

        if (q.empty())
            s[i] = "queue is empty";
        else
            s[i] = q.front();
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }
}
int main()
{
    test();
    return 0;
}