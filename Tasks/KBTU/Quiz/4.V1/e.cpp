#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


bool ff(int a, int b, int c , int d)
{
	if(a!=b && b!=c && c!=d && a!=c && a!=d && b!=d)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
int f(int qwert)
{
	int first = qwert/1000;
	int second = qwert/100%10;
	int third = qwert/10%10;
	int fourth = qwert%10; 
	if(ff(first,second,third,fourth))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}

int Example1()
{
	int ABCD;
	cin >> ABCD;

	int x = ABCD;
	
	do
	{
		x++;
	}while(f(x)!=1);
	cout << x;
}

int main()
{
	Example1();
	return 0;
}