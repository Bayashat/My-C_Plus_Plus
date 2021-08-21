#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

char fdsa(vector<int> v,int **a)
{

}
void BayashatsExample2()
{
	string ss1,ss2;
	cin >> ss1 >> ss2;
	string koshirme = ss2;
	int i=0;
	int g = ss1.size();
	int h = ss2.size();
	int san1[g];
	int san2[g];
	if(ss1.size()!=ss2.size())
	{
		while(ss2.size()!=ss1.size())
		{
			if(i==h) i=0;
			ss2 += koshirme[i];
			i++;
		}
	}
	char a[26][26];
	char x = 'a';
	char s = 'a';
	char r = 'a';
	for(int i=0;i<26;i++,s++)
	{
		r = 'a';
		x = 'a';
		if(i!=0)
		{
			x = s;

		}
		for(int j=0;j<26;j++)
		{
			if(x>'z')
			{
				a[i][j] = r;
				r++;
			}
			else
			{
				a[i][j] = x;
				x++;
			}
		}
		
	}
	int q,w;
	int aq =0;
	int indexx=0;
	for(int i=0;i<ss1.size();i++)
	{
		for(int k=0;k<26;k++)
		{
			if(ss1[i]==a[k][0])
			{
				san1[indexx] = k;
				indexx++;
				break;
			}
		}
	}
	int indexxx = 0;
	for(int i=0;i<ss2.size();i++)
	{
		for(int k=0;k<26;k++)
		{
			if(ss2[i]==a[0][k])
			{
				san2[indexxx] = k;
				indexxx++;
				break;
			}
		}
	}
	for(int i=0;i<ss1.size();i++)
	{
		cout << a[san1[i]][san2[i]];
	}
	

}
int main() 
{
	BayashatsExample2();
    return 0;
}