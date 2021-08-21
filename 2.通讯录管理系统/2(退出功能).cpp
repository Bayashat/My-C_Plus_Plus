/*         2. 退出功能

功能描述：退出通讯录系统

思路：根据用户不同的选择，进入不同的功能，可以选择switch分支结构，将整个架构进行搭建.
当用户选择0时候，执行退出，选择其他先不做操作，也不会退出程序

*/
#include <iostream>
using namespace std;
//菜单界面
void showMenu()
{
    cout << "***************************" << endl;
    cout << "***** 1.添加联系人 *****" << endl;
    cout << "***** 2.显示联系人 *****" << endl;
    cout << "***** 3.删除联系人 *****" << endl;
    cout << "***** 4.查找联系人 *****" << endl;
    cout << "***** 5.修改联系人 *****" << endl;
    cout << "***** 6.清空联系人 *****" << endl;
    cout << "***** 0.退出通讯录 *****" << endl;
    cout << "***************************" << endl;
}

int main()
{
    int select = 0; // 创建用户选择输入的变量
    
    while (true)
    {
        showMenu();
        cin >> select;
        switch (select)
        {
        case 1:     // 1.添加联系人
            break;
        case 2:     // 2.显示联系人
            break;
        case 3:     // 3.删除联系人
            break;
        case 4:     // 4.查找联系人
            break;
        case 5:     // 5.修改联系人
            break;
        case 6:     // 6.清空联系人
            break;
        case 0:     // 7.退出通讯录
            cout << "欢迎下次使用" << endl;
            return 0;
            break;
        default:
            break;
        }
    }

    return 0;
}