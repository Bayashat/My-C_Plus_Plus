#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> st;
    bool res = true;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            if(!st.empty())
            {
                st.pop();
            }
            else
            {
                res = false;
                break;
            }
        }
    }
    if(s.empty() && res == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
