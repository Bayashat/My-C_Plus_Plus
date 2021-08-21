    //      6. 排序, 转换 Vector

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int> &v)
{
    for(vector<int> :: iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main() 
{

    vector<int> v = {1, 3, 2, 5, 4};

    // 1. 正序排序
    sort(v.begin(),v.end());    
    printVector(v);  // 1 2 3 4 5

    // 2.1 逆序排序:
    reverse(v.begin(),v.end()); 
    printVector(v);  // 5 4 3 2 1

    // 2.2 逆序排序:
    sort(v.rbegin(), v.rend());
    printVector(v); // 5 4 3 2 1
    
    // 2.3 逆序排序: 准确说是 利用 反iterator 逆向输出
    vector<int> :: reverse_iterator it;
    for(it = v.rbegin(); it != v.rend(); ++it)
    {
        cout << *it << " ";
    }

	return 0;
}