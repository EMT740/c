#include<stdio.h>
#define FUN(a,b,c) a+b+c
#define EXM(a,b) a*b
#define ADD(x,y) x+y

int main()
{
   printf("%d\n",FUN(1,2,3));
   printf("%d\n",EXM(ADD(1,4),ADD(3,6)));//1+4*3+6
    return 0;
}