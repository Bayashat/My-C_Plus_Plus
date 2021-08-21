/*       9P 字符串查找 - find函数 案例:      

          例题：
在给定的字符串里找指定的字母出现了几次， 比如  he 在 hehelohe   中出现了三次
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text , pattern;
    // cin >> text >> pattern;
    text = "hehelohe";
    pattern = "he";

    int cnt = 0;
    size_t pos =0;
    
    for(;;) // 无限循环
    {
        pos = text.find(pattern,pos);       
        if(pos != string :: npos)
        {
            cnt++;
            pos++;
        }
        else
        {
            break;
        }
    }
    /*  1. while 形式:
    while(pos < string::npos);      //// 也可以写pos != string::npos
    {
        pos = text.find(pattern,pos);       
        if(pos != string :: npos)
        {
            cnt++;
            pos++;
        }
    }     
    */

   /*   2. while 形式-2:
    while((pos = text.find(pattern,pos)) < string::npos);      //// 也可以写pos != string::npos
    {
        cnt++;
        pos++;
    } 

    */
    /*   3. do while 形式:
    do{
        pos = text.find(pattern,pos);       
        if(pos != string :: npos)
        {
            cnt++;
            pos++;
        }
    }while(pos < string::npos);     // 也可以写pos != string::npos
    */
    
    cout << cnt << endl;
    return 0;
}