#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

void BayashatExample5()
{
	int n;
	cin >> n;
	map<string,string> m;
	map<string,string> m2;
	for(int i=0;i<n;i++)
	{
		string s1,s2;
		cin >> s1 >> s2;
		m.insert(make_pair(s1,s2));
	}

	map<string,string> :: iterator it;
	map<string,string> :: iterator it2;
	map<string,string> :: iterator it3;

    for(it=m.begin();it!=m.end();it++)
    {
		for(it2=m.begin();it2!=m.end();it2++)
		{
			if((*it).second==(*it2).first)
			{
				m2.insert(make_pair((*it).second,(*it2).first));
			}
		}
    }

	for(it2=m2.begin();it2!=m2.end();it2++)
    {
		cout << (*it2).first << " " << (*it2).second << endl;
    }

}
int main() 
{
	int n;
	cin >> n;
	map<string,string> m;
	map<string,string> m2;
	for(int i=0;i<n;i++)
	{
		string s1,s2;
		cin >> s1 >> s2;
		m.insert(make_pair(s1,s2));
	}

	map<string,string> :: iterator it;
	map<string,string> :: iterator it2;
	map<string,string> :: iterator it3;

    for(it=m.begin();it!=m.end();it++)
    {
		for(it2=m.begin();it2!=m.end();it2++)
		{
			if((*it).second==(*it).first)
			{
				m2.insert(make_pair((*it).second,(*it2).first));
			}
		}
    }

	for(it3=m2.begin();it3!=m2.end();it3++)
    {
		cout << (*it3).first << " " << (*it3).second << endl;
    }

    return 0;
}