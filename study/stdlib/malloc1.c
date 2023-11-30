#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)malloc(25 * sizeof(int)); // 动态内存上数据会默认初始化为0
    for (int j = 0; j < 25; j++)
    {
        p[j] = j + 1;
    } // 内存不够
    // 1、申请更大的内存
    int *q = (int *)malloc(50 * sizeof(int));
    // 2、把原来的内存数据，保存在新的内存上
    for (int j = 0; j < 25; j++)
    {
        q[j] = p[j];
    }
    // 3、释放旧内存
    free(p); // 释放的不是指针p，而是p指向的这片内存
    // 使指针变量指向新的内存
    p = q;
    for (int j = 25; j < 50; j++)
    {
        p[j] = j + 1;
    }
    for (int j = 0; j < 50; j++)
    {
        printf("%d\t", q[j]);
    }
    return 0;
}