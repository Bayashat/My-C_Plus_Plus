//      5.转义字符

//用于显示一些不能显示出来的ASCII字符
//先阶段我们常用的转义字符有： \n \\ \t

#include <iostream> 
using namespace std;

int main()
{
    //换行符  \n
    cout << "hello world\n"; //可以取代原本在这里的 "<< endl;"

    //反斜杠: 两个反斜杠 
    cout << "\\" << endl;    //作用：可以显示出一个反斜杠    

    // 水平制表符  \t  (占8个位置)  作用：可以整齐输出数据 
    cout << "aaa\thelloworld" << endl;  //这儿3个a 占了3个位置， 所以 aaa 和 helloworld 之间只剩5个空格
    cout << "aa\thelloworld" << endl;
    cout << "aaaa\thelloworld" << endl;
    
    return 0;
}