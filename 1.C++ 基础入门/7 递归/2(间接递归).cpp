/*                  2. 间接递归

直接递归与间接递归

间接递归：当函数调用另一个函数并且该函数调用这个函数时，这称为间接递归。例如：函数 A 调用函数 B，函数 B 调用函数 A。

例题 2 数的阶乘的间接递归案例
*/
#include <iostream>
using namespace std;

int fa(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fb(n - 1);
}
int fb(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fa(n - 1);
}
int main()
{
    int num = 5;
    cout << fa(num);
    return 0;
}