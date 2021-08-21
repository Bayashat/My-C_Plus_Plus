/*                      Unique

        1. 介绍:
unique是 STL 比较实用的一个函数 。 用于“去除”容器内相邻的重复的元素（只保留一个）。
这里说的去除并不是真正将容器内的重复元素删去，只是把重复的元素移到容器最后，但是依然在容器内。 
对于数组而言返回去重后最后一个元素的指针，而其他容器则是返回去重后最后一个元素的迭代器。

unique函数的去重过程实际上就是不停的把后面不重复的元素移到前面来，也可以说是用不重复的元素占领重复元素的位置

        2. 函数原型:
  
  1.只有两个参数，且参数类型都是迭代器:  iterator unique(iterator it_1,iterator it_2);

这种类型的unique函数是我们最常用的形式。其中这两个参数表示对容器中[it_1，it_2)范围的元素进行去重(注：区间是前闭后开，即不包含it_2所指的元素),
 返回值是一个迭代器，它指向的是去重后容器中不重复序列的最后一个元素的下一个元素。

 2.有三个参数，且前两个参数类型为迭代器，最后一个参数类型可以看作是bool类型: 
    iterator unique(iterator it_1,iterator it_2,bool MyFunc);

该类型的unique函数我们使用的比较少，其中前两个参数和返回值同上面类型的unique函数是一样的，主要区别在于第三个参数。
这里的第三个参数表示的是自定义元素是否相等。也就是说通过自定义两个元素相等的规则，来对容器中元素进行去重。这里的第三个参数与STL中sort函数的第三个参数功能类似.

        3. 
 1.有很多文章说的是, unique去重的过程是将重复的元素移到容器的后面去，实际上这种说法并不正确，应该是把不重复的元素移到前面来
 2.一定不要忘记的是, unique函数在使用前需要对容器中的元素进行排序(当然不是必须的，但我们绝大数情况下需要这么做)
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool myfunction(int i, int j)
{
    return (i == j);
}

int main()
{

    int arr[] = {10, 20, 20, 20, 30, 30, 20, 20, 10};
    vector<int> v(arr, arr + 9);

    // 1. 可以先这样查看数组的变化(也就是，unique元素们都跑到了前面，别的都在后面)
    unique(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // 10 20 30 20 10 30 20 20 10
    }
    cout << endl;

    // 2. 通过迭代器获取不重复元素的最后一个位置: 
    vector<int>::iterator it;
    it = unique(v.begin(), v.end()); // 10 20 30 20 10 ?  ?  ?  ?

    // 3. 可以用这种方式将unique的elem显示
    for (vector<int>::iterator it2 = v.begin(); it2 != it; it2++)
    {
        cout << *it2 << " "; // 10 20 30 20 10
    }
    cout << endl;

    // 4. 也可以这样直接重新定义为unique的容量
    v.resize(distance(v.begin(), it)); // 10 20 30 20 10

    cout << distance(v.begin(), it) << endl; // 显示重新定义的容量是----5

    for (vector<int>::iterator it2 = v.begin(); it2 != v.end(); it2++)
    {
        cout << *it2 << " "; // 10 20 30 20 10
    }

    return 0;
}