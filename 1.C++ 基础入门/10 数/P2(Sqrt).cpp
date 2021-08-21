/*      2. SQRT:    部分取自 Lab_1 - D

输出数字的 平方根:
*/
#include <iostream>
#include <cmath>
#include <iomanip>  // 控制符头文件
using namespace std;

    // 1. 只需要输出 浮点型值, 小数点后几位不重要:
void test01()
{
    int a = 9;
    int b = 20;
    double d1 = sqrt(a);
    double d2 = sqrt(b);
    cout << d1 << endl;  // 3
    cout << d2 << endl; // 4.47214
}

    // 2. 使用 printf(".Xf", d) 控制输出 精度:
void test02()
{
    int a = 9;
    int b = 20;
    double d1 = sqrt(a);
    double d2 = sqrt(b);
    // 控制 小数点后 10 位精度:
    printf("%.10f", d1); // 3.0000000000
    printf("%.10f", d2); // 4.4721359550
}

    // 3. 使用 <iomanip> + fixed + setprecision(X) 来控制 精度:
void test03()
{
    int a = 9;
    int b = 20;
    double d1 = sqrt(a);
    double d2 = sqrt(b);
    
    cout << fixed; // 代表 强制以小数显示
    cout << setprecision(10); // 表示 小数点后显示10位
    cout << d1 << endl; // 3.0000000000
    cout << d2 << endl; // 4.4721359550
}
int main()
{
    //test01();

    //test02();

    test03();
    
    return 0;
}