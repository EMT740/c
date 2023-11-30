#include <stdio.h>
#include<string.h>

int main()
{
    char str1[20] = {"aaaaaa"};
    char str2[20] = {"aaaaaa"};
    // 字符串比较不是比较地址大小，也不是比较字符长度
    if (strcmp(str1, str2) == 0) // 返回值是0说明相等 负数说明1小于2 正数说明1大于2
    {
        printf("两个字符串相等\n");
    }
    else if (strcmp(str1, str2) < 0)
    {
        printf("str1<str2\n");
    }
    else
    {
        printf("str1>str2\n");
    }
    return 0;
}