#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int nums[10];
    for(int i=0;i<10;i++)
    {
        nums[i] = 0;
    }
    for(int i=0;i<s.size();i++)
    {
        int d =s[i]-'0';
        nums[d] = nums[d]+1;
    }
    int cnt1 = 0;
    int cnt2=0;
    for(int i=0;i<10;i++)
    {
        if(nums[i]!=0)
        {
            cnt1++;
            cnt2 += nums[i];
        }
    }
    if(cnt2%cnt1!=0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}