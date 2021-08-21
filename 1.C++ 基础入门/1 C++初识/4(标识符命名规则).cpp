//标识符命名规则
#include <iostream>
using namespace std;

// 1.标识符不可以是关键字
// 2.标识符是由字母，数字，下划线构成的
// 3.标识符第1个字符只能是字符或下划线
// 4.标识符是区分大小写的
int main()
{
    // 1.标识符不可以是关键字
    int int =10     

    // 2.标识符是由字母，数字，下划线构成的
    int abc = 10;
    int _abc = 10;
    int _123abc = 30;
    //int 123bc = 40;

    // 4.标识符是区分大小写的
    int aaa = 100;
    //cout << AAA << endl;     AAA 和 aaa 不是同一个名称

    //建议：给变量起名的时候，最好能够做到见名知意。

    return 0;
}