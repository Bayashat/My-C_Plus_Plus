#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int ff()
{


}
int Example1()
{
	string qqqqqqqqqqqqqq;
	cin >> qqqqqqqqqqqqqq;

	char ccccccccc[26];
	char q = 'a';
	for(int i=0;i<26;i++)
	{
		ccccccccc[i] = q;
		q = q+1;
	}

	char xxxxxxxxx[26];
	char w = 'z';
	for(int i=0;i<26;i++)
	{
		xxxxxxxxx[i] = w;
		w = w-1;
	}

	for(int i=0;i<qqqqqqqqqqqqqq.length();i++)
	{
		for(int j=0;j<26;j++)
		{
			if(qqqqqqqqqqqqqq[i]==ccccccccc[j])
			{
				qqqqqqqqqqqqqq[i] = xxxxxxxxx[j];
				break;
			}
		}
	}

	cout << qqqqqqqqqqqqqq;
}

int main()
{
	Example1();
	return 0;
}