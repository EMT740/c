#include<stdio.h>
#include<string.h>
//strlen返回字符串长度不包含“\0”

int main()
{
    char str1[20]={"aaaaaa"};
    char str2[20]={"aabbcc"};
    printf("%d\n",strlen(str1));
    return 0;
}