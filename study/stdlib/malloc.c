#include <stdio.h>
#include <stdlib.h>

int main()
{
    // malloc(100) 从堆区申请100字节大小的内存
    int *p = (int *)malloc(100); // 指针变量来管理从堆区申请的内存
    // int *p = (int *)malloc(25*sizeof(int));一般这样使用
    *p = 10;
    *(p + 1) = 20;
    printf("%d %d\n", *p, *(p + 1));
    printf("%d %d\n", p[0], p[1]);
    //[]也有解引用的作用
    free(p);
    return 0;
}