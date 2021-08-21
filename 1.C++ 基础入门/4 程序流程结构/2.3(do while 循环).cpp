/*
2.1 循环结构- do...while循环语句

**作用：满足循环条件，执行循环语句

**语法：do{ 循环语句 } while(循环条件);

**注意：与while的区别在于  do...while会先执行一次循环语句，再判断循环条件
*/
#include <iostream>
using namespace std;

int main()
{
    // do while 语句
    // 在屏幕上输出 0~9 这10个是数字

   int num = 0;
   do 
   {
       cout << num << endl;
       num++;
   }while(num<10);
    
    return 0;
} // do...while和while循环 区别在于 do while 会先执行一次循环语句,再判断循环条件
  // 而while会先判断循环条件，在执行语句