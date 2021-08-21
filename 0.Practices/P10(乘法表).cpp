/*              P3. 制作乘法表

效果如下:

                0 1 2 3 4 
5:              1 1 2 3 4
                2 2 4 6 8
                3 3 6 9 12
                4 4 8 12 16

*/
#include <iostream>
using namespace std;

int main()
{
    int n,num=0;
    cin >> n;
    int a[n][n];

    for(int i = 0;i<n;i++)
    {
        a[0][i] =num;
        num++;
    }
    num=1;
    for(int j = 1;j<n;j++)
    {
        a[j][0] =num;
        num++;
    }


    for(int i = 1;i<n;i++)
    {
        for(int j = 1;j<n;j++)
        {
            a[i][j] = a[0][j]*a[i][0];
        }
    }

    for(int i = 0; i < n; i++) 
    {
        for(int j = 0 ; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}