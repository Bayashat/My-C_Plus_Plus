/*          9. 数据的输出

cout 

*/
#include <iostream>
#include <iomanip>  // 控制符头文件
using namespace std;

int main()
{
    // 1. 格式化输出: 
    int c = 1, b = 2, a = 3;
    cout << c << " " << b << " " << a << " " << endl;
    printf("%i %i %i\n", c, b, a); // 1 2 3


    // 2. setw : 控制输出宽度
    double attack1 = 272;
    double attack2 = 250;
    double attack3 = 240;

    cout << setw(8) << attack1 <<
            setw(8) << attack2 <<
            setw(8) << attack3 << endl; 
//       272     250     240    
// 这是右对齐
// 想要左对齐,就要先输入 cout << left;
cout << left;
cout << setfill('_');   // 表示填充
    cout << setw(8) << attack1 <<
            setw(8) << attack2 <<
            setw(8) << attack3 << endl; 
//272_____250_____240_____
    return 0;
}