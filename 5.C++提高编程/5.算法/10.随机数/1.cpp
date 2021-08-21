/*
            1.rand()
功能:
随机数发生器

用法:
int rand(void)

所在头文件:
stdlib.h

rand() 的内部实现是用线性同余法做的，它不是真的随机数，因其周期特别长，故在一定的范围里可看成是随机的。

rand() 返回一随机数值的范围在 0 至 RAND_MAX 间。RAND_MAX 的范围最少是在 32767 之间(int)。用 unsigned int 双字节是 65535，四字节是 4294967295 的整数范围。0~RAND_MAX 每个数字被选中的机率是相同的。

用户未设定随机数种子时，系统默认的随机数种子为 1。

rand() 产生的是伪随机数字，每次执行时是相同的; 若要不同, 用函数 srand() 初始化它。

                        2.srand()
功能:   
初始化随机数发生器

用法:
void srand(unsigned int seed)

所在头文件:
stdlib.h

srand() 用来设置 rand() 产生随机数时的随机数种子。参数 seed 必须是个整数，如果每次 seed 都设相同值，rand() 所产生的随机数值每次就会一样。

                    3.使用当前时钟作为随机数种子

    rand() 产生的随机数在每次运行的时候都是与上一次相同的。若要不同, 用函数 srand() 初始化它。
可以利用 srand((unsigned int)(time(NULL)) 的方法，产生不同的随机数种子，因为每一次运行程序的时间是不同的。


                        4.产生随机数的用法

1) 给srand()提供一个种子，它是一个unsigned int类型；
2) 调用rand()，它会根据提供给srand()的种子值返回一个随机数(在0到RAND_MAX之间)；
3) 根据需要多次调用rand()，从而不间断地得到新的随机数；
4) 无论什么时候，都可以给srand()提供一个新的种子，从而进一步"随机化"rand()的输出结果。
0~RAND_MAX 之间的随机数程序

#include <iostream>
#include <stdlib.h>
#include <time.h> 

using namespace std; 

int main()
{ 
        srand((unsigned)time(NULL)); 
        for(int i = 0; i < 10;i++ ) 
                cout << rand() << '/t';
        cout << endl; 
        return 0;
}


                            5.产生一定范围随机数的通用表示公式

要取得 [a,b) 的随机整数，使用 (rand() % (b-a))+ a;

要取得 [a,b] 的随机整数，使用 (rand() % (b-a+1))+ a;

要取得 (a,b] 的随机整数，使用 (rand() % (b-a))+ a + 1;

通用公式: a + rand() % n；其中的 a 是起始值，n 是整数的范围。

要取得 a 到 b 之间的随机整数，另一种表示：a + (int)b * rand() / (RAND_MAX + 1)。

要取得 0～1 之间的浮点数，可以使用 rand() / double(RAND_MAX)。
