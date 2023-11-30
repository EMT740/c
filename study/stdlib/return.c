#include <stdio.h>

int *fun1()
{
    int b = 20;
    return &b; // 局部变量
}
//从堆区申请内存
//返回从堆区申请的内存
int *fun2()
{
    int* temp=(int*) malloc(25*sizeof(int));
    //temp临时保存地址
    return temp;
}
int main()
{
    int a = 10;
    int *p = &a;
    p = fun1();
    printf("%d\n", *p);//符合语法，但不符合逻辑
    printf("%d\n", *p);
    int *buff=NULL;//从堆区申请内存
    buff=fun2();
    free(buff);
    return 0;
}