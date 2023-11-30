#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)calloc(25, sizeof(int)); // 动态内存上数据会默认初始化为0
    // realloc//可以改变申请的内存大小 realloc(指针，修改的大小)
    // 但是不会初始化内存上的数据
    realloc(p, 50 * sizeof(int));
    for (int j = 0; j < 50; j++)
    {
        printf("%d\t", *(p + j));
    }
    return 0;
}