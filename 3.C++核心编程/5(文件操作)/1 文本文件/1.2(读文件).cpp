///////////////////   1.1 读文件

/*      读文件
读文件与写文件步骤相似，但是读取方式相对于比较多
读文件步骤如下：

1. 包含头文件
#include <fstream>

2. 创建流对象
ifstream ifs;

3. 打开文件并判断文件是否打开成功
ifs.open("文件路径",打开方式);

4. 读数据
四种方式读取

5. 关闭文件
ifs.close();
*/

#include <iostream>
using namespace std;
#include <fstream>      // 1.头文件包含
# include <string>

void test01()
{
    // 2.创建流对象: 
    ifstream ifs;
    
    // 3.打开文件,并且判断是否打开成功:
    ifs.open("test.txt", ios::in);

    if (!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
        return;
    }

    // 4.读数据

    // 第0种:
    // 如果想输出到屏幕的话:
    cout << ifs.rdbuf();

    // 第一种:
    char buf[1024] = {0};
    while(ifs>>buf)
    {
        cout << buf << endl;
    }

    // 第二种:
    char buf[1024] = {0};
    while(ifs.getline(buf, sizeof(buf)))
    {
        cout << buf << endl;
    }
    ifs.close();

    // 第三种:
    string buff;
    while( getline(ifs, buff))
    {
        cout << buf << endl;
    }

    // 第四种:
    char c = 0;
    while( (c = ifs.get()) != EOF)  // EOF : end of file
    {
        cout << c;
    }

    

    // 5.关闭文件:
    ifs.close();
}

int main() 
{
    test01();
    return 0;
}

/*
总结：
读文件可以利用 ifstream ，或者fstream类
利用is_open函数可以判断文件是否打开成功
close 关闭文件
*/