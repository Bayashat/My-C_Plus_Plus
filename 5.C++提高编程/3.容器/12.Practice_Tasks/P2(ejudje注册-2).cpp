/*          18. ejudje 注册-2       取自 Lab_9 - O

Students of KBTU want to registrate in ejudge. You have logins and passwords of n students. Then we
have m requsts. Every request have login and password, if this login does not exist print "login error else
if login exist and password is not correct print "password error else print "correct password";

2
Alikhan lalala
Slava kpss
4
Alikhan lala                password error
Meirhan lalala              login error
Alikhan lalala              correct password
Slava Sonya                 password error

*/
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

void test()
{
    int n, m;
    cin >> n;
    multimap<string, string> mm;

    for (int i = 0; i < n; i++)
    {
        string x, y;
        cin >> x >> y;
        mm.insert(make_pair(x, y));
    }
    cin >> m;
    string p[m];
    for (int i = 0; i < m; i++)
    {
        string x, y;
        cin >> x >> y;
        multimap<string, string>::iterator pos = mm.find(x);
        if (pos == mm.end())
            p[i] = "login error";
        else
        {
            bool found;
            for (multimap<string, string>::iterator it = mm.begin(); it != mm.end(); it++)
            {
                found = false;
                if ((*it).second == y)
                {
                    found = true;
                    break;
                }
            }
            if (found)
                p[i] = "correct password";
            else
                p[i] = "password error";
        }
    }

    for (int i = 0; i < m; i++)
    {
        cout << p[i] << endl;
    }
}
int main()
{
    test();
    return 0;
}