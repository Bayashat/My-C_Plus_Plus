// 1.4 嵌套if语句  ：在if语句中，可以嵌套使用if语句，达到更精确的条件判断
#include <iostream>
using namespace std;

int main()
{
/*   案例需求：

* 提示用户输入一个高考考试分数，根据分数做如下判断
* 分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本，其余视为未考上本科；
* 在一本分数中，如果大于700分，考入北大，大于650分，考入清华，大于600考入人大。
*/

    // 1. 输入分数
    int score=0;
    cin >> score;
    // 2. 提示用户输入的分数
    cout << "your score is: " << score << endl;
    // 3. 判断
    if(score > 600) 
    {
        cout << "congratulations,you were admitted to a first university" << endl;
        if(score > 700)
        {
            cout << "Bei Da" << endl;
        }
        else if(score > 650)
        {
            cout << "Qing Hua" << endl;
        }
        else 
        {
            cout << "Ren Da" << endl;
        }
    }
    else if(score > 500)
    {
        cout << "congratulations,you were admitted to a second university" ;
    }
    else if(score > 400)
    {
        cout << "congratulations,you were admitted to a third university" ;
    }
    else 
    {
        cout << "sorry, you didn't ener the university" ;
    }

    return 0;
}
