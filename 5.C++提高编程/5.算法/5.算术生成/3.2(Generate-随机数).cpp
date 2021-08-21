/*       3. generate 生成器--将vector填充随机数
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

using namespace std;

int f()
{
    return rand()%100;  // 随机数发生器 : 0~99
}
int main()
{
    srand(time(0));     // 初始化随机数为 0 
    vector<int> v(8);
    generate(v.begin(),v.end(),f); 


    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
}