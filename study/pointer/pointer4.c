#include<stdio.h>

int main()
{
char *p="abcdefg";//不在数组中 是一个常量，不能被改变
puts(p);
while(*p)
{
    printf("%c\t",*(p++));//p1 保存的是首地址
}
    return 0;
}