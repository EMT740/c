#include <stdio.h>

// 改变指针变量的指向
int main()
{
    int a = 10;
    int b = 20;
    int *p = &a;
    // *p = 1; //*p就相当于是变量a，因为p保存了&a
    p = &b; // 覆盖
    *p = 2;//更改
    printf("%d",b);

    return 0;
}