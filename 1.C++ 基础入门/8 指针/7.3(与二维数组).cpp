/*      指针与二维数组
    
    作用: 数组们向函数传参只能用 指针 来地址传递, 不能用值传递

    * 地址传递二维数组时 需要提供其中一维的大小: a[][1001]
*/
#include <iostream>
using namespace std;

//  * 地址传递
//  1. 第一种方式: 
void test01(int a[][1001])
{
    cout << a[0][0];
}

// 2. 第二种方式:
void test02(int **a, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        a[i] = new int[m];
        for(int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    // 地址传递:
    // 1. 第一种方式
    int b[3][1001] = 
    {
        1, 2, 3,
        4, 5, 6,
        7, 8, 9,
    };
    test01(b);

    // 第二种方式:
    int **a;
    int n = 5;
    int m = 3;
    
    for(int i = 0; i < n; i++)
    {
        a[i] = new int[m];
        for(int j = 0; j < m; j++)
        {
            a[i][j] = 1;
        }
    }
    test02(a, n, m);
    
    return 0;
}
