/*          1. Next_permutation

功能: 求一系列数据的下个排列组合
语句: Next_permutation(first,last); 

*/
#include <iostream>
#include <algorithm>
using namespace  std;

void print(int *a)
{
    for(int i = 0; i < 3; ++i)
    {
        cout << a[i] << " ";
    }  
}
int main() 
{

    int a[] = {1, 2, 3};
    int len = sizeof(a) / sizeof(int);  // 3

    // 求出它的下一个排列， 3!=6. 所以是有6个
    next_permutation(a, a + 3); 
    print(a);   // 1 3 2
    next_permutation(a, a + 3);
    print(a);   // 2 1 3
    next_permutation(a, a + 3);
    print(a);   // 2 3 1
    next_permutation(a, a + 3);
    print(a);   // 3 1 2
    next_permutation(a, a + 3);
    print(a);   // 3 2 1

        // 1. while遍历：
    while(next_permutation(a,a+len))
    {
        for(int i = 0; i < len; ++i)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    // 2. do while 遍历：
    do{
        for(int i = 0; i < len; ++i)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }while(next_permutation(a, a + len));


    return 0;
}