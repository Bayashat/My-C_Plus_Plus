/*
         continue语句

**作用：在循环语句中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环
   continue 会不执行他下面的那些代码，会执行下一次的循环
*/
#include <iostream>
using namespace std;

int main()
{
    // continue 语句
    
    for(int i=0; i<=100; i++)
    {
        //如果是奇数就输出，偶数则不输出。
        if(i%2==0)
        {
            continue;   // 可以筛选条件，执行到此就不再向下执行，执行下一次循环
        }
        cout << i << endl;
    }
    return 0;
}   // 注意：continue并没有使整个循环终止，而break会跳出循环

