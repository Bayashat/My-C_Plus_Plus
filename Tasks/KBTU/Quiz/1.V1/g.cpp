#include <iostream>
using namespace std;
int main() 
{
	int n,a,b;
	cin >> n >> a >> b;
	if(n<=a)
	{
		cout << 1;
		return 0;
	}

	if(a==b || n<b || a<b)
	{
		cout << "NO";
		return 0;
	}

	int cnt=1;
	for(int x=0;x<=n;)
	{
		x+=a;
		if(x<n)
		{
			x-=b;
			cnt++;
		}
		else
		{
			break;
		}
	}
	cout << cnt;
	
    return 0;
}