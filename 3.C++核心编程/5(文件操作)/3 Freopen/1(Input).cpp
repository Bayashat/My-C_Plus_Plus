//          1. Intput

// 可迅速查看要运算的结果
//需要先创建一个txt文件(例如input.txt),而且在里面写好要运算的例子(如：2，3)
#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);

    int a,b;
    cin >> a >> b ;
    cout << a+b << endl;

    return 0;
}