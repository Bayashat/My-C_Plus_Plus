/*
        8. 输入二维数组:

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    // 动态的从键盘向二维数组输入数据: 
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    return 0;
}