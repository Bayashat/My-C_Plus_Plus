/*

        8. 修改字符串

要修改字符串中的某个字串,可通过2种方式:
    1. 通过 []
    2. 通过 .at() 函数

 注意: 此修改方式下 只能修改某字串为另一个字串.
*/
#include <iostream>
using namespace std;

int main()
{
    string s = "Hello";
    
    // 1.通过 []:
    s[0] = 'z';
    cout << s << endl;  // "zello"

    // 2.通过 .at()
    s.at(1) = 'z';
    cout << s << endl;  // "zzllo";
    
    return 0;
}