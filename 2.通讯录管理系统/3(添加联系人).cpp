/*            3 添加联系人-功能实现

功能描述:
    实现添加联系人功能，联系人上限为1000人，联系人信息包括（姓名、性别、年龄、联系电话、家庭住址）

添加联系人实现步骤:
 * 设计联系人结构体
 * 设计通讯录结构体
 * main函数中创建通讯录
 * 封装添加联系人函数
 * 测试添加联系人功能
 * 
 */
#include <iostream>
#include <string> //string头文件
using namespace std;

#define MAX 1000 //最大人数

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

// 3.1 设计联系人结构体
// 联系人信息包括：姓名、性别、年龄、联系电话、家庭住址

//联系人结构体
struct Person
{
    string m_Name;  //姓名
    int m_Sex;      //性别：1男 2女
    int m_Age;      //年龄
    string m_Phone; //电话
    string m_Addr;  //住址
};

// 3.2 设计通讯录结构体
// 设计时候可以在通讯录结构体中，维护一个容量为1000的存放联系人的数组，并记录当前通讯录中联系人数量

//通讯录结构体
struct Addressbooks
{
    struct Person personArray[MAX]; //通讯录中保存的联系人数组
    int m_Size;                     //通讯录中人员个数
};

// 3.4 封装添加联系人函数
// 思路：添加联系人前先判断通讯录是否已满，如果满了就不再添加，未满情况将新联系人信息逐个加入到通讯录
void addPerson(Addressbooks *abs)
{
    //判断电话本是否满了,如果满了就不再添加.
    if (abs->m_Size == MAX)
    {
        cout << "通讯录已满，无法添加" << endl;
        return;
    }
    else
    {
        // 添加具体联系人:
        //姓名
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;

        //性别
        cout << "请输入性别：" << endl;
        cout << "1 -- 男" << endl;
        cout << "2 -- 女" << endl;
        int sex = 0;
        while (true)
        {
            // 如果输入的是1或2可以退出循环,因为输入的是正确值
            // 如果输入有误,重新输入
            cin >> sex;
            if (sex == 1 || sex == 2)   
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            cout << "输入有误，请重新输入";
        }

        //年龄
        cout << "请输入年龄：" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;

        //联系电话
        cout << "请输入联系电话：" << endl;
        string phone = "";
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;

        //家庭住址
        cout << "请输入家庭住址：" << endl;
        string address;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;
        
        //更新通讯录人数
        abs->m_Size++;
        cout << "添加成功" << endl;
        system("pause"); // 按任意键继续
        system("cls");   // 清屏
    }
}
int main()
{
    // 3.3 main函数中创建通讯录
    // 添加联系人函数封装好后，在main函数中创建一个通讯录变量，这个就是我们需要一直维护的通讯录

    // 创建通讯录结构体变量:
    Addressbooks abs;
    //初始化通讯录中当前人数:
    abs.m_Size = 0;

    int select = 0; // 创建用户选择输入的变量

    while (true)
    {
        // 菜单调用
        showMenu();
        cin >> select;
        switch (select)
        {
        case 1:     // 1.添加联系人
            addPerson(&abs); // 利用地址传递,可以修饰实参.
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