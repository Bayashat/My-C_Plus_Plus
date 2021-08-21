#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main() 
{
	string s,s2;
	cin >> s >> s2;
	string original = s;
	if(s.find(s2)!=string::npos)
	{
		cout << s;
		return 0;
	}
	else if(s2.find(s)!=string::npos)
	{
		cout << s2;
		return 0;
	}
	
	flag:
	int x = s.size()-1;
	for(int i=1;i<s.size();i++,x--)
	{
		string ss1 = s.substr(x,i);
		string ss2 = s2.substr(0,i); 
		if(ss1==ss2)
		{
			s.erase(x,i);
			s2.erase(0,i);
			goto flag;
		}	
	}
	cout << original+s2 ;
	
    return 0;
}
//boriska karamelka 