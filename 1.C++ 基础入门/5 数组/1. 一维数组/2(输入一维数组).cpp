/*
        2. 输入一维数组

*/
#include <iostream>
using namespace std;

int main()
{
    // 动态的从键盘录入信息:
    int N = 5;
    int nums[N];
    for(int i = 0; i < N; i++)  // i < (sizeof(nums) / sizeof(int)) 从而获取数组长度.
    {
        cin >> nums[i];
    }

    for(int i = 0; i < N; i++)
    {
        cout << nums[i] << endl;
    }
    
    return 0;
}