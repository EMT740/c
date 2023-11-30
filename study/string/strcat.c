#include <stdio.h>
#include<string.h>
// strcat(str1,str2);把str1中的字符连接到str2中去

int main()
{
    char str1[20] = {"aaaaaa"};
    char str2[20] = {"aabbcc"};
    strcat(str1, str2);
    puts(str1);
    return 0;
}