/*  3.Switch 语句

    作用：执行多条件分支语句

    语法：
    switch(表达式)
    {

        case 结果1：执行语句;break;

        case 结果2：执行语句;break;

        ...

        default:执行语句;break;
    }
*/
#include <iostream>
using namespace std;


int main(){
    //Switch 语句
    //给电影打分
    // 10~9 经典
    // 8~7 非常好
    // 6~5 一般
    // 5以下 烂片

    // 1. 提示用户给电影评分
    cout << "please rate the movie" << endl;
    // 2.用户开始进行打分
    int score = 0;
    cin >> score;
    cout << "your score is " << score << endl;
    // 3.根据用户输入的分数来提示用户最后的结果
    if(score>0 && score<=10)
    {
        switch(score)
        {
            case 10:
            cout << "you think that is a classic movie" << endl;
            break;   //代表退出分支，不写的话程序会继续往下跑

            case 9:
            cout << "you think that is a classic movie" << endl;
            break;

            case 8:
            cout << "you think that is a good movie" << endl;
            break;

            case 7:
            cout << "you think that is a good movie" << endl;
            break;

            case 6:
            cout << "you think that is a norm movie" << endl;
            break;

            case 5:
            cout << "you think that is a norm movie" << endl;
            break;

            default:
            cout << "you think that is a bad movie" << endl;
        }
    }
    else
    {
        cout << "again" << endl;
    }
    return 0;
} 
/*总结:
// If 与 Switch 的区别
Switch缺点：判断时候只能是整型或字符型，不可以是一个区间
Switch优点：结构清晰，执行效率高

> 注意1：switch语句中表达式类型只能是整型或者字符型

> 注意2：case里如果没有break，那么程序会一直向下执行

> 总结：与if语句比，对于多条件判断时，switch的结构清晰，执行效率高，缺点是switch不可以判断区间

*/