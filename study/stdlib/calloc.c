//calloc(unsigned n,int size);
//用以分配n个大小为size的连续内存区域，可以为一维数组开辟动态内存空间
//例如：int *p=(int*)calloc(10,sizeof(int));
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int*p=(int*)calloc(25,sizeof(int));//动态内存上数据会默认初始化为0
    /* for(int j=0;j<25;j++)
    {
        printf("%d\t",*(p+j));
    } */
    //realloc//可以改变申请的内存大小 realloc(指针，修改的大小)
    realloc(p,50*sizeof(int));
    for(int j=0;j<50;j++)
    {
        printf("%d\t",*(p+j));
    }
    return 0;
}