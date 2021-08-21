/*              1. 直接递归

直接递归与间接递归
直接递归: 当函数调用自身时, 它被称为直接递归, 我们下面看到的例子是直接递归示例。 
*/
//      例题 1. 数字的和
#include<iostream>  
using namespace std;    

int f(int n)  
{
    if(n==1)
        return 1;
    return f(n-1)+n;
}

int main()
{
    int x;
    cin >> x;
    cout << f(x);
    return 0;
}