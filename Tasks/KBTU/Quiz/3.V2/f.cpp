#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	set<string> s, s2;
	for (int i = 0; i < n; i++)
	{
		string ss;
		cin >> ss;
		s.insert(ss);
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		string ss;
		cin >> ss;
		s2.insert(ss);
	}
	cout << "Missed students:" << endl;
	for (set<string>::iterator it = s.begin(); it != s.end(); it++)
	{
		set<string>::iterator it2 = s2.find(*it);
		if (it2 == s2.end())
		{
			cout << "- " << *it << endl;
		}
	}
	cout << "Not in the group:" << endl;
	for (set<string>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		set<string>::iterator it2 = s.find(*it);
		if (it2 == s.end())
		{
			cout << "- " << *it << endl;
		}
	}
	return 0;
}