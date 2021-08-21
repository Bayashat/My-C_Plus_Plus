#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int n; 
	string s; 
	cin >> n >> s;

	char c[52];
	char x = 'A';
	
	for(int i=0;i<52;i++)
	{
		if(x=='Z'+1)
		{
			x = 'A';
		}

		c[i] = x;
		x++;
	}
	
	for(int i=0;i<s.size();i++)
	{
		for(int j=0;j<26;j++)
		{
			if(s[i]==c[j])
			{
				s[i] = c[j+n];
				break;
			}
		}
	}
	
	cout << s;
	
    return 0;
}