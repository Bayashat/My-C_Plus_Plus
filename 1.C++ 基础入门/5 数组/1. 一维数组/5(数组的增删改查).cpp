//      5 实现数组元素的删除和插入:
#include <iostream>
using namespace std;

int main()
{
    double power[99];    // 数组的大小一旦确定了,就不能再更改了!!!!  所以为了预防越界,可以在初始化时预留多点空间.
    //  power[56]   这样后期的更改是错误的.
    int powerCount = 0;  // 当前数组中的元素个数.

    power[powerCount++] = 45771;    // power[0]
    power[powerCount++] = 42322;    // power[1]
    power[powerCount++] = 40907;    // power[2]
    power[powerCount++] = 40706;    // power[3]

    // powerCount 现在是 4



    // 冒泡排序: 为从大到小
    double temp;
    for(int i = 0; i < powerCount; i++)
    {
        for(int j = 0; j < powerCount - i -1; j++)
        {
            if(power[j] < power[j+1])
            {
                temp = power[j];
                power[j] = power[j+1];
                power[j+1] = temp;
            }
        }
    }
    cout << "排序后:" << endl;
    for(int i = 0; i < powerCount; i++)
    {
        cout << power[i] << "\t";
    }
    cout << endl;

    /*   1.插入 : 我们希望数字插入后数组仍然是有序的    */
    double insertPower; // 要插入的数值
    cout << "请输入要插入的数字: " ;
    cin >> insertPower;
    
    // 分3步执行:
    // 1. 找到第一个比插入数字大的位置 insertIndex
    int insertIndex = 0;    // 默认插入位置为0

    insertIndex = powerCount;
    for(int i = 0; i < powerCount; i++)
    {
        if(insertPower > power[i])
        {
            insertIndex = i;
            break;
        }
    }
    // 2. 从最后一个元素开始,将数字复制到后面一个元素中
    for(int i = powerCount - 1; i >= insertIndex; i--)
    {
        power[i+1] = power[i];
    }
    // 3. 将要插入的数字赋值给下标为insertIndex的因素.
    power[insertIndex] = insertPower;

    // 4.将数组的总长度+1
    powerCount++;
    cout << "插入后: " << endl;
    for(int i = 0; i < powerCount; i++)
    {
        cout << power[i] << "\t";
    }
    cout << endl;

    /*  2.删除:     */
    // 1.找到要删除的元素下标
    double deletePower;
    int deleteIndex = -1;

    cout << "请输入要删除的数字: ";
    cin >> deletePower;
    for(int i = 0; i < powerCount; i++)
    {
        if(deletePower == power[i])
        {
            deleteIndex = i;
            break;
        }
    }

    if(deleteIndex == -1)
    {
        cout << "没有找到要删除的元素,删除失败!!!" << endl;
    }
    else
    {
        //  2. 从找到的下标开始,后面一个元素赋值给前面一个元素
        for(int i = deleteIndex; i < powerCount - 1; i++)
        {
            power[i] = power[i+1];
        }  
        //  3.总长度-1
        powerCount--;
    }

    cout << "删除后: " << endl;
    for(int i = 0; i < powerCount; i++)
    {
        cout << power[i] << "\t";
    }
    return 0;
}