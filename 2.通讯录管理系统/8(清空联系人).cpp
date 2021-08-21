/*          8. 清空联系人

功能描述：清空通讯录中所有信息

清空联系人实现步骤:
 * 封装清空联系人函数
 * 测试清空联系人
*/
#include <iostream>
#include <string>
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

// 4 封装显示联系人函数
// 思路：判断当前通讯录中人数是否为0,如果为0, 提示记录为空，如果不为0，显示通讯录中信息

//显示所有联系人信息
void showPerson(Addressbooks *abs)
{
    if (abs->m_Size == 0)
    {
        cout << "当前记录为空" << endl;
    }
    else
    {
        for (int i = 0; i < abs->m_Size; i++)
        {
            cout << "姓名：" << abs->personArray[i].m_Name << "\t";
            cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
            cout << "年龄：" << abs->personArray[i].m_Age << "\t";
            cout << "电话：" << abs->personArray[i].m_Phone << "\t";
            cout << "住址：" << abs->personArray[i].m_Addr << endl;
        }
    }
    system("pause"); // 按任意键继续
    system("cls");   // 清屏
}

// 5.1 封装检测联系人是否存在
// 思路:删除联系人前，我们需要先判断用户输入的联系人是否存在，如果存在删除，不存在提示用户没有要删除的联系人
// 因此我们可以把检测联系人是否存在封装成一个函数中，如果存在，返回联系人在通讯录中的位置，不存在返回-1
int isExist(Addressbooks *abs, string name)
{
    for (int i = 0; i < abs->m_Size; i++)
    {
        if (abs->personArray[i].m_Name == name)
        {
            return i;
        }
    }
    return -1;
}

// 5.2 删除指定联系人:
void deletePerson(Addressbooks *abs)
{
    cout << "请输入删除联系人姓名: " << endl;
    string name;
    cin >> name;

    // ret =- -1 没查到
    // ret != -1 查到
    int ret = isExist(abs, name);

    if (ret != -1)
    {
        // 查找到人,要进行删除操作: 将要删除的人之后的都依次前移盖位置.
        for (int i = ret; i < abs->m_Size; i++)
        {
            // 数据前移
            abs->personArray[i] = abs->personArray[i + 1];
        }
        abs->m_Size--; // 更新通讯录的人员数
        cout << "删除成功" << endl;
    }
    else
    {
        cout << "查无此人" << endl;
    }

    system("pause");
    system("cls");
}

//  6. 查找指定联系人信息
// 实现思路：判断用户指定的联系人是否存在，如果存在显示信息，不存在则提示查无此人。
void findPerson(Addressbooks *abs)
{
    cout << "请输入您要查找的联系人" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs, name);
    if (ret != -1)
    {
        cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
        cout << "性别：" << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
        cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
        cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
        cout << "住址：" << abs->personArray[ret].m_Addr << endl;
    }
    else
    {
        cout << "查无此人" << endl;
    }
    system("pause"); // 按任意键继续
    system("cls");   // 清屏
}

// 7.修改指定联系人信息
// 实现思路：查找用户输入的联系人，如果查找成功进行修改操作，查找失败提示查无此人
void modifyPerson(Addressbooks *abs)
{
    cout << "请输入您要修改的联系人" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs, name);
    if (ret != -1)
    {
        //姓名
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        abs->personArray[ret].m_Name = name;
        cout << "请输入性别：" << endl;
        cout << "1 -- 男" << endl;
        cout << "2 -- 女" << endl;
        //性别
        int sex = 0;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[ret].m_Sex = sex;
                break;
            }
            cout << "输入有误，请重新输入";
        }
        //年龄
        cout << "请输入年龄：" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[ret].m_Age = age;
        //联系电话
        cout << "请输入联系电话：" << endl;
        string phone = "";
        cin >> phone;
        abs->personArray[ret].m_Phone = phone;
        //家庭住址
        cout << "请输入家庭住址：" << endl;
        string address;
        cin >> address;
        abs->personArray[ret].m_Addr = address;
        cout << "修改成功" << endl;
    }
    else
    {
        cout << "查无此人" << endl;
    }

    system("pause"); // 按任意键继续
    system("cls");  // 清屏
}

// 8.清空所有联系人
// 实现思路： 将通讯录所有联系人信息清除掉，只要将通讯录记录的联系人数量置为0，做逻辑清空即可.
void cleanPerson(Addressbooks * abs)
{
    abs->m_Size = 0;
    cout << "通讯录已清空" << endl;

    system("pause");
    system("cls");
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
        case 1:              // 1.添加联系人
            addPerson(&abs); // 利用地址传递,可以修饰实参.
            break;
        case 2: // 2.显示联系人
            showPerson(&abs);
            break;
        case 3: // 3.删除联系人
            // 如果你在 break 前有较长的代码块, 不把他们用括号括起来的话会报错.
            // {
            //     cout << "请输入删除联系人姓名: " << endl;
            //     string name;
            //     cin >> name;
            //     if( isExist(&abs, name) == -1)
            //     {
            //         cout << "查无此人" << endl;
            //     }
            //     else
            //     {
            //         cout << "找到此人" << endl;
            //     }
            //  }
            deletePerson(&abs);
            break;
        case 4: // 4.查找联系人
            findPerson(&abs);
            break;
        case 5: // 5.修改联系人
            modifyPerson(&abs);
            break;
        case 6: // 6.清空联系人
            cleanPerson(&abs);
            break;
            
        case 0: // 7.退出通讯录
            cout << "欢迎下次使用" << endl;
            return 0;
            break;
        default:
            break;
        }
    }

    return 0;
}
