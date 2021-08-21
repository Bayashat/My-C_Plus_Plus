#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPrime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
void BayashatsExample1()
{
	int n;
	cin >> n;
	vector<int> v;
	for(int i=2;i<n;i++)
	{
		if(isPrime(i))
		{
			v.push_back(i);
		}
	}

	int a,b;
	reverse(v.begin(),v.end());
	vector<int> vv(v);
	reverse(v.begin(),v.end());
	int min = 1e9+1;

	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<vv.size();j++)
		{
			if(v[i]+vv[j]==n)
			{
				int sum = v[i]+vv[j];
				if(sum<min)
				{
					min = sum;
					a = v[i];
					b = vv[j];
				}
			}
		}
	}
	cout << a << " " << b;
}
int main() 
{
	BayashatsExample1();
    return 0;
}