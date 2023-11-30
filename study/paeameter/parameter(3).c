// 嵌套传递
#include <stdio.h>

int fun1(int a, int b)
{
    return a + b;
}

int fun2(int a, int b)
{
    return a * b;
}

int main()
{
    printf("%d", fun2(fun1(3, 4), 10));
    return 0;
}