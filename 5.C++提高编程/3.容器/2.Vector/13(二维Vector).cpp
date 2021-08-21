/*

        12. 二维数组

*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 1. 定义:
    vector<vector<int>> v;

    // 2. 输入:
    for(int i = 0; i < 5; i++)
    {
        vector<int> t;
        for(int j = 0; j < i; j++)
        {
            t.push_back(1);
        }
        v.push_back(t);
        t.clear();
    }

    // 3.输出:
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}