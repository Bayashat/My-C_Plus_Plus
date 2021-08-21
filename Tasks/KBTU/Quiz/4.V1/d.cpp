#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int Example1()
{
	string sssssssssssss,qqqqqqqqqqq;
	cin >> sssssssssssss >> qqqqqqqqqqq;

	int index = 0;
	
	while(index!=string::npos)
	{
		index = sssssssssssss.find(qqqqqqqqqqq,index);
	
		if(index!=string::npos)
		{
			cout << index << " ";
			index++;
		}
	}
	
}

int main()
{
	Example1();
	return 0;
}