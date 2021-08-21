/*       P2  斐波那契数列     : 取自 Lab_7 : H

输出第n个Fibonsnci 数字
*/
#include <iostream>
using namespace std;

int fibonanci(int n)
{
   if (n == 1)
      return 0;
   if (n == 2)
      return 1;
   return fibonanci(n - 1) + fibonanci(n - 2);
}
int main()
{
   int x;
   cin >> x;
   cout << fibonanci(x);

   return 0;
}