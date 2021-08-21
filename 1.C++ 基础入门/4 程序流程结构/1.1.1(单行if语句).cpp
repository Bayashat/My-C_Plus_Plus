// 1.1 选择结构-If语句-(单行If语句)
#include <iostream>
using namespace std;

int main()
{
    //  单行If语句
    //语法： if(条件){ 条件满足执行的语句 }
    // 用户输入分数，如果分数大于600，视为考上一本大学，在屏幕上输出

    // 1. 输入分数
    int score = 0;
    cin >> score;
    // 2.提示用户输入的分数
    cout << "your score is: " << score << endl;
    /// 3.判断
    if(score > 600) 
    {
        cout << "congratulations,you were admitted to a university" ;
    }

    return 0;
}
