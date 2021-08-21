/*
        P2. 出现几次
给定数字 n 和 k;
并给定 n个数字, 需要输出 k 在这些数字里出现了几次?
例子:
 4 2
 1 2 2 4          答案是 2 次
*/
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    map<int, int> m; 
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    cout << m[k];
    return 0;
}