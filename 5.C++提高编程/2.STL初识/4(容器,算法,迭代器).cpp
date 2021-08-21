###     2.4  STL中容器,算法,迭代器



**容器: 置物之所也

STL**容器**就是将运用**最广泛的一些数据结构**实现出来

常用的数据结构：数组, 链表,树, 栈, 队列, 集合, 映射表 等

这些容器分为**序列式容器**和**关联式容器**两种:

​	**序列式容器**: 强调值的排序，序列式容器中的每个元素均有固定的位置。
​	**关联式容器**: 二叉树结构，各元素之间没有严格的物理上的顺序关系



**算法：**问题之解法也

有限的步骤, 解决逻辑或数学上的问题，这一门学科我们叫做算法(Algorithms)

算法分为: **质变算法**和**非质变算法**.

质变算法: 是指运算过程中会更改区间内的元素的内容。例如拷贝，替换，删除等等

非质变算法: 是指运算过程中不会更改区间内的元素内容，例如查找、计数、遍历、寻找极值等等



**迭代器：**容器和算法之间粘合剂

提供一种方法，使之能够依序寻访某个容器所含的各个元素，而又无需暴露该容器的内部表示方式。

每个容器都有自己专属的迭代器

迭代器使用非常类似于指针，初学阶段我们可以先理解迭代器为指针



迭代器种类：

| 种类           | 功能                                                   | 支持运算                                |
| -------------- | ------------------------------------------------------| --------------------------------------- |
| 输入迭代器     | 对数据的只读访问                                        | 只读，支持++、==、！=                   |
| 输出迭代器     | 对数据的只写访问                                        | 只写，支持++                            |
| 前向迭代器     | 读写操作，并能向前推进迭代器                             | 读写，支持++、==、！=                   |
| 双向迭代器     | 读写操作，并能向前和向后操作                             | 读写，支持++、--，                      |
| 随机访问迭代器 | 读写操作，可以以跳跃的方式访问任意数据，功能最强的迭代器 | 读写，支持++、--、[n]、-n、<、<=、>、>= |：

常用的容器中迭代器种类为双向迭代器，和随机访问迭代器