#include<stdio.h>


void fun(int *x,int *y)
{//x=&a,y=&b
*x=1;
*y=2;
}
int main()
{
int a=10;
int b=20;
fun(&a,&b);
printf("%d %d",a,b);
    return 0;
}