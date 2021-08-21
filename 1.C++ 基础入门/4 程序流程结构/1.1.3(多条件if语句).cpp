// 1.3  If语句-(多条件If语句)
#include <iostream>
using namespace std;

int main(){
    /*  多条件If语句
    语句：if(条件1){条件1满足执行的语句} else if(条件2){条件2满足执行的语句}... else{ 都不满足执行的语句}
   
    // 输入分数，如果分数大于600，视为考上一本大学，在屏幕上输出
    //若大于500，视为考上二本大学，在屏幕上输出
    //若大于400，视为考上三本大学，在屏幕上输出
    //小于等于400分，视为未考上本科，屏幕输出
*/
    // 1. 输入分数
    int score=0;
    cin >> score;
    // 2. 提示用户输入的分数
    cout << "your score is: " << score << endl;
    // 3. 判断
    if(score > 600) 
    {
        cout << "congratulations,you were admitted to a first university" ;
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