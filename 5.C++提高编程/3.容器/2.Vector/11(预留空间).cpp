/*      8 vector预留空间

**功能描述:
    * 减少vector在动态扩展容量时的扩展次数

**函数原型:

    * reserve(int len);   //容器预留len个元素长度，预留位置不初始化，元素不可访问。
*/
#include <iostream>
#include <vector>
using namespace std;

void test01()
{
    
    // 1. 我们想看一下vector容器开辟到100000容量需要开辟多少次内存?

    vector<int> v;       
    int num = 0;    // 统计开辟次数
    int *p = NULL;  // 创建个指针指向0；
    for(int i=0;i<100000;i++)
    {
        v.push_back(i);

        if(p != &v[0])  // 如果指针不指向首地址了，
        {
            p = &v[0];  // 那就让它指向首地址
            num++;      // 并统计
        }
    }     
    cout << "num= " << num << endl; // 30 : 它重复操作了30次这样的操作: 转换新的更大的空间,把原数据的空间拷贝到新空间下,再释放掉原有空间.
    

    // 2. 利用reserve预留空间
    vector<int> v;    
    v.reserve(100000);
    int num = 0;  
    int *p = NULL;  
    for(int i=0;i<100000;i++)
    {
        v.push_back(i);

        if(p != &v[0])  
        {
            p = &v[0];  
            num++;      
        }
    }     
    cout << "num= " << num << endl; // 1 : 预留空间后只需一次

}
int main()
{
    test01();
}
//  总结：如果数据量较大，可以一开始利用reserve预留空间