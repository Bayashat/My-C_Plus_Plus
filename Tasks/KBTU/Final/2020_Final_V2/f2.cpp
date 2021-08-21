#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

string comporator(int a)
{
	stringstream ss;
	ss<<a;
	string sss;
	ss>>sss;
	reverse(sss.begin(),sss.end());
	
	while(sss[0]=='0')
	{
		sss.erase(0,1);
	}
	
	return sss;
}
void BayashatsExample3()
{
    int n;
    cin >> n;
    vector<pair<int,int> >m;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;
        m.push_back(make_pair(x,y));
    }
	
	
    for(int i=0;i<m.size();i++)
    {
        int f =  m[i].first;
		int r = m[i].second;
		string d = comporator(f);
		string h = comporator(r);
		stringstream qq,qqq;
		int t,y;
		qq<<d;
		qq>>t;

		qqq<<h;
		qqq>>y;
		
		int u = t+y;
		stringstream qqqq;
		qqqq<<comporator(u) ;
		int p;
		qqqq>>p;
		cout << p << endl;
    }
	
}
int main() 
{
	BayashatsExample3();
    return 0;
}