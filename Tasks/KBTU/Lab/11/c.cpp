#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool f(const pair<string,double> &p1,const pair<string,double> &p2) ////要用常数，不然编译错误 
{
	if(p1.second==p2.second)
	{
		return p1.first > p2.first;
	}
	return p1.second > p2.second;
}
int main() 
{
	int n; cin >> n;
	long long total=0;
	map<string,double> m;
	
    // 首先创建map 然后进数据
	for(int i=0;i<n;i++)
	{
		string s;
		double x;
		cin >> s >> x;
		total+=x;
		m[s]+=x;
	}

	vector<pair<string,double> > v;
    // 然后直接将其改百分比后，放入 vector (因为要是想要把map按照value排序，我们需要创建pair类型的vector,然后利用vector的sort函数排序:)
	for(map<string,double>::iterator it=m.begin();it!=m.end();it++)
	{
		(*it).second = (*it).second*100/double(total);
		v.push_back(make_pair((*it).first,(*it).second));
	}
	// 
	sort(v.begin(),v.end(),f);
	
	for (vector<pair<string,double> >::iterator it=v.begin();it!=v.end();++it)
   {
   		cout<<it->first<< " " <<it->second<< "%" <<  endl;
   }
	
    return 0;
}