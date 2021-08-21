/*
        P4. 转二进制:   取自 Lab_7 - B

需要将给定数字用 递归 转为二进制
*/
#include<iostream>
using namespace std;    

string f(int n,string res)
{
    if(n==0) return res;
    return f(n/2,char(n%2+48)+res);
}

int main()
{
    int x;
    cin >> x;
    cout << f(x,"");
    return 0;
}