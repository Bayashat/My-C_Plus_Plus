#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool isUnique(vector<int>v, int x)
{
	int cnt=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==x)
		{
			cnt++;
		}
	}
	if(cnt>=2) return false;

	return true;
}
int main() 
{
	int n; cin >> n;
	int a[n],u=0,index;
	int max = 1e9+1;
	for(int i=0;i<n;i++)
	{
		index=-7854;
		max = 1e9+1;
		int m;
		cin >> m;
		vector<int> v;
		for(int j=0;j<m;j++)
		{
			int x;
			cin >> x;
			v.push_back(x);
		}
		for(int k=0;k<v.size();k++)
		{
			if(isUnique(v,v[k])==true && v[k]<max)
			{
				max = v[k];
				index = k;
			}
		}
		a[u] = index+1;
		u++;
		v.clear();
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==-7853)
		{
			cout << "ZA WARUDO" << endl;
		}
		else cout << a[i] << endl;
	}
	
    return 0;
}