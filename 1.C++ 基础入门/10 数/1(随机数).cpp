#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    //  随机数种子:利用系统当前的时间产生随机数
    srand((unsigned int)time(NULL));

    //int random = rand() % 60; // 表示 在 0~59 区间取数字.
    int random = rand() % 60 + 40;  // 表示在 40~99 区间取数
    /*
        但是这不是真正的随机数,都是一样的数字. 需要加 随机数种子 才能实现 真*随机.
    */
   cout << random;
    return 0;
}
