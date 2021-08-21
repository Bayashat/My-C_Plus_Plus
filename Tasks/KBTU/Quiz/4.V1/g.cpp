#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int Example1()
{
	int N,A,B;
	cin >> N >> A >> B;
	string qwert;
	cin >> qwert;
	int UPPER=0,LOWER = 0;
	for(int i=0;i<qwert.size();i++)
	{
		if(isupper(qwert[i]))
		{
			UPPER++;
		}
		else
		{
			LOWER++;
		}
	}
	
	int minnumberofUPPER = UPPER*A;
	int minnumberofLOWER = LOWER*B;
	
	if(LOWER==UPPER)
	{
		int ddddddddddd = min(A,B);
		cout << LOWER*ddddddddddd ;
		return 0;
	}
	cout << min(minnumberofUPPER,minnumberofLOWER);

	return 0;
}

int main()
{
	Example1();
	return 0;
}