#include <bits/stdc++.h>
using namespace std;

int f(char c)
{
	char x[8];
	char s = 'A';
	x[0] = s;
	for (int i = 0; i < 8; i++)
	{
		x[i] = s++;
	}
	for (int i = 0; i < 8; i++)
	{
		if (x[i] == c)
			return i;
	}
}
int main()
{
	int n;
	cin >> n;
	char c[8][8];
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			c[i][j] = '0';
		}
	}
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		char q = s[0];
		int d = int(s[1] - 48);
		c[f(q)][d - 1] = '*';
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cout << c[i][j];
		}
		cout << endl;
	}

	return 0;
}