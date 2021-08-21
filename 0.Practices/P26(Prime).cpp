/*
        5. Prime:	取自 Lab_3 - Q

检测给定数字是否是 Prime(质数)
*/
#include <iostream>

using namespace std;

int main() 
{
	int n; 
	cin >> n;
	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
		{
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
    return 0;
}