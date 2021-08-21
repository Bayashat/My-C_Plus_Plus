//  Unique 2--- Vector
//   要想真正去除重复元素还需要使用erase()函数
#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(1);
	v.push_back(4);
	v.push_back(6);
	v.push_back(6);
	v.push_back(7);
	vector<int>::iterator it = unique(v.begin(),v.end());
	cout<< v.size() <<endl;
	v.erase(it,v.end());
	for(it = v.begin();it != v.end();it++)
	{
		cout << *it << " ";	
	} 
	return 0;
}