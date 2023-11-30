// 递归调用
#include <stdio.h>

/* void fun(int x)
{
    fun(1);
}

int main()
{
    fun(1);
    return 0;
} */
/* void fun()//形成死循环
{
    printf("1");
    fun();
}

int main()
{
    fun();
    return 0;
} */
void fun(int n)
{
    if(n!=0)
    {
       
        fun(n-1); 
        printf("%d\t",n);
    }
}

int main()
{
    fun(10);
    return 0;
}