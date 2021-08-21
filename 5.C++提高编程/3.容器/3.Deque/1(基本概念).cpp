/*
        3 deque容器
        
        3.1 deque容器基本概念
功能:
    双端数组，可以对头端进行插入删除操作

deque与vector区别:
    * vector对于头部的插入删除效率低，数据量越大，效率越低
    * deque相对而言，对头部的插入删除速度回比vector快
    * vector访问元素时的速度会比deque快,这和两者内部实现有关
*/

         front():                                                                                            back():
            1          2       3       4       5       6        7        8     9       10         11           12
         v.begain()                                                                                                     v.end()

使用 v.push_back() 从尾部插入数据

使用 v.pop_back() 从尾部删除数据

可以用 v.insert() 在任何位置插入数据


使用 v.push_front() 从头部插入数据

使用 v.pop_front() 从头部删除数据

/*
    deque内部工作原理:
deque内部有个中控器，维护每段缓冲区中的内容，缓冲区中存放真实数据
中控器维护的是每个缓冲区的地址，使得使用deque时像一片连续的内存空间
*/