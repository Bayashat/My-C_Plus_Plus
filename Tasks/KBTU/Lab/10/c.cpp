#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

bool square(int n)
{
    int root = sqrt(n);
    if (root * root == n)
        return true;
    return false;
}

int main()
{
    string s;
    cin >> s;
    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        st.push(s[i]);
        if (st.size() >= 2)
        {
            int b = st.top() - 48;
            char bb = st.top();
            st.pop();
            int c = st.top() - 48;
            char cc = st.top();
            st.pop();
            int x = b + (c * 10);

            if (square(x) && x >= 10)
            {
                continue;
            }
            else
            {
                st.push(cc);
                st.push(bb);
            }
        }
    }
    if (st.empty())
        cout << "Stack is empty";
    else
    {
        while (!st.empty())
        {
            cout << st.top();
            st.pop();
        }
    }
    return 0;
}