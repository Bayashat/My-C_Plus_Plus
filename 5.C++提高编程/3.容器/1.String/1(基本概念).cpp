     
        1. string 基本概念
    本质: 
* string是C++风格的字符串，而string本质上是一个类
* C++ 提供的 string 类包含了若干实用的成员函数，大大方便了字符串的增加、删除、更改、查询等操作。

    string和char * 区别:
* char * 是一个指针
* string是一个类，类内部封装了char*，管理这个字符串，是一个char*型的容器.

    特点:
string 类内部封装了很多成员方法
例如：查找find，拷贝copy，删除delete 替换replace，插入insert
string管理char*所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责
