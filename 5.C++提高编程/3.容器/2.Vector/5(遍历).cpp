/*
            5. 遍历 Vector 容器

容器： vector
算法： for_each
迭代器： vector<int>::iterator

*/
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm> // 标准算法头文件

void MyPrint(int val)
{
    cout << val << endl;
}

void test01()
{
    //创建vector容器对象
    vector<int> v;

    //向容器中放数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40); 

    //每一个容器都有自己的迭代器，迭代器是用来遍历容器中的元素
    //vector<int>::iterator 拿到vector<int>这种容器的迭代器类型
    vector<int>::iterator itBegin = v.begin(); //v.begin() 是起始迭代器, 指向容器中第一个数据
    vector<int>::iterator itEnd = v.end();     //v.end() 是结束迭代器, 这个迭代器指向容器元素的最后一个元素的下一个位置

// 1. 第一种遍历方式: 像数组一样
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // 也可以写 v.at(i) 
    }

// 2. 第二种: 使用迭代器:
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
    cout << endl;

// 3. 第三种:  使用STL提供标准遍历算法 头文件 algorithm

    for_each(v.begin(), v.end(), MyPrint);

// 4. 第四种: auto
    for(auto x : v)
    {
        cout << x << endl;
    }

// 5. 第五种: 使用 反向itrator 反向输出:

    vector<int> :: reverse_iterator it;
    for(it = v.rbegin(); it != v.rend(); ++it)
    {
        cout << *it << " ";
    }
}


int main()
{
    test01();

    return 0;
}