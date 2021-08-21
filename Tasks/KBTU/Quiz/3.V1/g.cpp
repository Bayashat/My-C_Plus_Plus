#include <algorithm>
#include <string>
#include <iostream>
#include <set>
using namespace std;
int f(int n,int i) 
{
	if(n<2) return 0;
	
	if(i==n+1)
	{
		return 0;
	}

	if(n%i==0)
	{
		cout << i << " ";
		return f(n/i,i);
	}
	else
	{
		i++;
		return f(n,i);
	}
}

int main()
{
	int n;
	cin >> n;
	f(n,2);
	return 0;
}