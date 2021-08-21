/*          P1 括号问题   :     取自 Lab_p - F

 给定 包含 不等数量的 ( 和 ) 的 字符串
 需要检查 正和反括号是否正好相除,例如: () , (()) , (()())
 而这个就不行: )( ,  ()), )(()))
*/
#include <iostream>
#include <stack>

using namespace std;

int main()
{

    stack<char> my_stack;

    string str;
    cin >> str;

    bool res = true;

    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == '(')
        {
            my_stack.push('(');
        }
        else if (str[i] == ')')
        {
            if (!my_stack.empty())
            {
                my_stack.pop();
            }
            else
            {
                res = false;
                break;
            }
        }
    }

    if (my_stack.empty() && res == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}