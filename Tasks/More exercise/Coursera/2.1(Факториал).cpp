#include <iostream>
using namespace std;

/*  1.
Самый простой способ решить задачу — написать цикл, вычисляющий произведение чисел от 2 до x, предварительно сравнив x с единицей:
*/
int Factorial(int x)
{
    int result = 1;
    for (int i = 2; i <= x; ++i)
    {
        result *= i;
    }
    return result;
}

/*  2.
Существует способ написать более лаконичный код по этой задаче — заметить, что для положительных x  Factorial(x) = x * Factorial(x - 1), 
и использовать рекурсию, то есть вызывать из функции Factorial себя же, но с на единицу меньшим аргументом:
*/
int Factorial(int x)
{
    if (x <= 1)
    {
        return 1;
    }
    else
    {
        return x * Factorial(x - 1); // вычисляем факториал от x-1 и умножаем на x
    }
}

int main()
{
    int x;
    cin >> x;
    cout << Factorial(x);
}