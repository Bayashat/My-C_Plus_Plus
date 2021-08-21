/*
**练习案例：  乘法口诀表

案例描述：利用嵌套循环，实现九九乘法表
*/
#include <iostream>
using namespace std;

int main()
{
    // 乘法口诀表
    for(int i=1 ; i <= 9; i++)
    {
        //cout << i << endl;
        for(int j=1; j <= i; j++)
        {
            cout << j << "*" << j << "=" << j*i << " ";
        }
        cout << endl;
    }


    return 0;
}