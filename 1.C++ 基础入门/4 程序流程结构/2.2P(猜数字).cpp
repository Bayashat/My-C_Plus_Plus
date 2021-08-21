/*
    while循环练习案例：    猜数字

**案例描述：系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并且退出游戏。
*/

#include <iostream>
#include <stdlib.h>     ///这是取random数字所需要的头文件
#include <ctime>
using namespace std;

int main()
{
    // 添加随机数种子，作用：利用当前系统时间生成随机数，防止每次随机数都一样。
    srand((unsigned int) time(NULL));

    // 1.系统生成随机数
    int num = rand() % 100 + 1;  //rand() % 100  这个代表 0~99   我们需要 1~100  所以要+1
   
    // 2.玩家进行猜测
    int val = 0;      //玩家输入的数据
    while(val!=num)
    {
        cin >> val;
        
    //3.判断玩家的猜测：

    //猜错  提示猜的结果 过大或者过小  重新返回第2步
    if(val>num)
    {
        cout << "it's bigger" << endl;
    }
    else if(val<num)
    {
        cout << "it's smaller" << endl;
    }
    else 
    {
        cout << "YES" << endl;
        //猜对  结束游戏
        break;
    }
    
    }
    return 0;
}