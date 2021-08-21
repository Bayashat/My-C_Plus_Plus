//      4.1 逻辑运算符 - 非(!)       
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    //C++中除了0，别的都为真（1）
    cout << !a << endl;   //所以取非值时会是0

    cout << !!a << endl;  //取两次非值会是1

    return 0;
}
//总结：真变假，假变真。
