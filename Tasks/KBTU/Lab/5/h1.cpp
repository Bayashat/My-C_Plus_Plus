#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int nums[10];
    for(int i=0;i<10;i++)
    {
        nums[i]=0;
    }
    for(int i=0;i<s.size();i++)
    {
        int d = (s[i]-'0');   // '0' = 48
        nums[d] = nums[d]+1;
    }
    int prev  = -1;
    for(int i=0;i<10;i++)
    {
        if(nums[i] != 0 && prev != -1)
        {
            if(nums[i] != prev)
            {
                cout << "NO";
                return 0;
            }
        }
        else if(nums[i] != 0 && prev == -1)
        {
            prev = nums[i];
        }
        else if(nums[i]==0) continue;
    }
    cout << "YES";
    
    return 0;
}