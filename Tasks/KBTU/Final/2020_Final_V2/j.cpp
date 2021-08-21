#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool yes(string s, string s2)
{
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=s2[i])
		{
			return false;
		}
	}
	return true;
}
int hhh(string s,string s2)
{
	string orginal = s;
	for(int i=1;i<s.size();i++)
	{
		s = orginal;
		rotate(s.begin(),s.begin()+i,s.end());
		if(yes(s,s2))
		{
			return i;
		}
	}
	return 155;
}

int main() 
{
	
	string s1;
	string s2;
	cin >> s1 >> s2;
	string ss1 = s1;
	string ss2 = s2;

	sort(ss1.begin(),ss1.end());
	sort(ss2.begin(),ss2.end());
	if(yes(s1,s2))
	{
		cout << 0;
		return 0;
	}
	if(s1.size()!=s2.size())
	{
		cout << "Understandable have a nice day";
		return 0;
	}
	for(int i=0;i<ss1.size();i++)
	{
		if(ss1[i]!=ss2[i])
		{
			cout << "Understandable have a nice day";
			return 0;
		}
	}

	int u =  hhh(s2,s1);
	cout <<  u;
	
	
	
    return 0;
}