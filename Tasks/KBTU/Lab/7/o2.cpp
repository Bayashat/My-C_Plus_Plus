#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string toKnary(int n, int k, string s)
{
   if (n < k)
   {
      if (n > 9)
      {
         return char(n + 'A' - 10) + s; // n + 55
      }
      else
      {
         return char(n + '0') + s; // n+48
      }
   }
   else
   {
      if (n % k > 9)
      {
         return toKnary(n / k, k, char(n % k + 55) + s);
      }
      else
      {
         return toKnary(n / k, k, char(n % k + 48) + s);
      }
   }
}
int main()
{
   int n, k;
   cin >> n >> k;
   string b = " ";
   cout << toKnary(n, k, b);
}