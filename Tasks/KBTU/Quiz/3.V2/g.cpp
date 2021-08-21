#include <bits/stdc++.h>
using namespace std;

string f(string s, int i)
{
	if (i == s.size())
		return "-1";
	if (isupper(s[i]))
	{
		string ss = "";
		ss += s[i];
		return ss;
	}
	return f(s, i = i + 1);
}
int main()
{
	string s;
	cin >> s;
	cout << f(s, 0);
	return 0;
}