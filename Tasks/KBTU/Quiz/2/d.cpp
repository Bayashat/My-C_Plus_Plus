#include <iostream>
#include <cstring>
using namespace std;

	int main()
    {
		int i, max;
		char s[100];
		cin>>s;
		max=0;
		for(int k=0; k<strlen(s);k++)
        {
		    for(i=0;i<k;i++)
            {
				if(s[i]!=s[k-i])
                {
					max=k+1;
				}
			}
		}
		cout<<max;
		return 0;
	}