/*          2. Output

将input.txt 里要运算的运算后, 创建个output文件, 把结果放到里面.

*/
#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a,b;
    cin >> a >> b ;
    cout << a+b << endl;

    return 0;
}