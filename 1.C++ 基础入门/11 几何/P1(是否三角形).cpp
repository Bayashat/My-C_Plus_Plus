/*
        10. 是否三角形: 取自 Quiz_1_v3 - i
给定3个数字,为三角形边长, 判断是否是 三角形?
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if((a+b>c) && (b+c>a)&&(a+c>b)) // 三角形的任何另两边的边长都要大于剩余一边
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    
    return 0;
}