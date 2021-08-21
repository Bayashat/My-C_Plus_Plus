/*
            P4. 数组元素逆置

将数组内的数据进行逆置

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // 1.创建数组
    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // 2.实现逆置
    // 2.1记录起始下标位置
    // 2.2记录结束下标位置
    // 2.3起始下标与结束下标的元素互换
    // 2.4起始位置++  结束位置--
    // 2.5循环执行2.1的操作，直到起始位置 >= 结束位置
    int start = 0;  //起始下标
    int end = sizeof(a) / sizeof(a[0]) - 1; //结束下标: n-1

    while (start < end)
    {
        //实现元素互换
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        //下标更新
        start++;
        end--;
    }
    
    // 3.打印逆置
    cout << " After: " << endl;
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}