/*
        6. 蜗牛:    取自 Quiz_1_v1 - G
        
给定 N,A,B  
树的长度为 N 米, 蜗牛白天爬 A 米, 黑夜跌 B 米
问: 蜗牛能不能爬到树顶,如果可以,需要几天?
*/
#include <iostream>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (n <= a)
    {
        cout << 1;
        return 0;
    }

    if (a == b || n < b || a < b)
    {
        cout << "NO";
        return 0;
    }

    int cnt = 1;
    for (int x = 0; x <= n;)
    {
        x += a;
        if (x < n)
        {
            x -= b;
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