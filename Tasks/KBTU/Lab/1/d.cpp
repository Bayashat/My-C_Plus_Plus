
#include <iostream>
#include <cmath>
#include <iomanip>  // 控制符头文件
using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << fixed;  // 让其固定以小数显示
    cout << setprecision(10);   // 控制精度
    cout << sqrt(n);
    
    return 0;
}