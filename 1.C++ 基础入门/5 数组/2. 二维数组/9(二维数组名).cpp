/*              二维数组数组名
 1. 查看二维数组所占内存空间
 2. 获取二维数组首地址
 */
#include <iostream>
using namespace std;

int main()
{
                // 1. 查看二维数组所占内存空间
    int arr[2][3] = 
    {
        {1,2,3},
        {4,5,6}
    };
    cout << "The memory of 2D array : " << sizeof(arr) << endl;    // 4*6=24
    cout << "The meory of 2D array's first row : " << sizeof(arr[0]) << endl;  // 12
    cout << "The memory of 2D array's first element : " << sizeof(arr[0][0]) << endl;   // 4

    cout << "Rows is : " << sizeof(arr) / sizeof(arr[0]) << endl;   // 24/12 = 2
    cout << "Columns is : " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;  // 12/4 = 3

                    // 2. 获取二维数组首地址
    cout << "The adress of 2D array is: " << (long long)arr << endl;
    cout << "The adress of 2D array's first row: " << (long long)arr[0] << endl;
    cout << "The adress of 2D array's second row: " << (long long)arr[1] << endl;
    // 当在访问具体元素的首地址时需要在前面加&取值符:
    cout << "The adress of 2D array's first element: " << (long long)&arr[0][0] << endl;
    cout << "The adress of 2D array's second element: " << (long long)&arr[0][1] << endl;
    
    return 0;
}