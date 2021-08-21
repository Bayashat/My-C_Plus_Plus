#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void Example1()
{
	int count = 0;
	string qwert;
	string q = "";
	while(cin)
	{
		cin >> qwert;
		count++;
		if(qwert.size()>q.size())
		{
			q = qwert;
		}
	}
	cout << q;
}


int main()
{
	Example1();
	return 0;
}