// 地址传递
#include <stdio.h>

void fun(int*p1,int*p2)//p1=&x,p2=&y;*p1=x,*p2=y
{
    *p1=100;
printf("*p1=%d\n",*p1);
}

int main()
{
    int x=10,y=20;
    fun(&x,&y);
    printf("x=%d\n",x);
    return 0;
}