/*          19.  Prime Factorization    取自 Quiz-3 v1 : F
使用 function
8 :  2 2 2
78: 2 3 13
*/
#include <algorithm>
#include <string>
#include <iostream>
#include <set>
using namespace std;
void f(int n) 
{
	for(int i=2;i<=n;)
	{
		if(n%i==0)
		{
			cout << i <<  " ";
			n = n/i;
		}
		else
		{
			i++;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	f(n);
	
	return 0;
}