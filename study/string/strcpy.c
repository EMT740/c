#include <stdio.h>
#include<string.h>
//strcpy(str1,str2);把str2拷贝到str1中去

int main()
{
    char str1[20] = {"aaaaaa"};
    char str2[20] = {"aabbcc"};
    strcpy(str1, str2);
    puts(str1);
    return 0;
}