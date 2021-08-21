/*      3. Duplicats on Array:   取自 LAB_3 - K
 
    将数组里重复的元素删掉, 只输出单一元素:
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 10;
    int a[10] = {1, 3, 4, 1, 5, 8, 2, 2, 4, 1};
    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            cout << a[i] << " ";   // 1 2 3 4 5 8
        }
    }
    return 0;
}