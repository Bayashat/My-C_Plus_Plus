/*          17. ejudje 注册     取自 Lab_9 - I

Students of first course want to registrate on ejudge.You have login requests.If login is not registered yet
print new user added, if this login already exist print user already exists
5
Alikhan             new user added
Aida                new user added
Aida                user already exists                 
Meirkhan            new user added
Alikhan             user already exists

*/
#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    set<string> se;
    int n;
    int a[n],x=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        pair<set<string> :: iterator, bool> ret = se.insert(s);
        if(ret.second)
        {
            a[x]=1;
            x++;
        }
        else
        {
            a[x]=0;
            x++;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            cout << "new user added" << endl;
        }
        else
        {
            cout << "user already exists" << endl;
        }
        
    }
    /*
                使用 map 做的
    map <string, int> m;
    vector< int> v;
    int n;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        if(m[s] == 0)  
        {
            v.push_back(0);
        }
        else
        {
            v.push_back(1);
        }
        m[s] = 1;
    }

    for(auto x: v)
    {
        if(x == 1)
        {
            cout << "user already exists" << endl;
        }
        else
        {
            cout << "new user added" << endl;
        }
    }
    */
    return 0;
}

