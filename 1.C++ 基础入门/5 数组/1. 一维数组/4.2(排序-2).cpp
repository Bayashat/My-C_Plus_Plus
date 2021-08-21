/*              4.2 排序-2: 
    
注意： 需加头文件：<algorithm>

*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int); // 5
                // 1.  正序排序: 
                // 1.1 sort 语句

    sort(arr,arr+n);   //  先写数组名, 然后是要排到哪个位置

                // 1.2 sort 语句: 使用谓词
    sort(arr, arr+n, less<int>());


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                // 2. 逆序排序:
                // 2.1 Reverse 语句:
    reverse(arr, arr+n); // 先写数组名，然后是要排到哪个位置    

                // 2.2 使用谓词
    sort(arr, arr + n, greater<int>());

                // 2.3 改变输出方式-1
    for(int i = n; i >=0; i--)
    {
        cout << arr[i] << " ";    // 1 2 3 4 5
    }      

                // 2.4 改变输出方式-2
    for(int i = 0; i < n; i++)
    {
        cout << arr[n - i -1] << " ";    // 5 4 3 2 1
    }     
}

