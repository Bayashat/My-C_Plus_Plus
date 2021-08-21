#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int Example1()
{
	string qwertyuiop;
	cin >> qwertyuiop;
	
	
	cout << "The anagram variants for string" << " " << qwertyuiop << " " << "are:" << endl;

	sort(qwertyuiop.begin(),qwertyuiop.end());
	
	do{
        for(int qqqqqqqqq = 0; qqqqqqqqq < qwertyuiop.size(); qqqqqqqqq++)
        {
            cout << qwertyuiop[qqqqqqqqq];
        }
        cout << endl;
    }while(next_permutation(qwertyuiop.begin(),qwertyuiop.end()));
}

int main()
{
	Example1();
	return 0;
}