#include <stdio.h>
#include<string.h>
// strcat(str1,str2);��str1�е��ַ����ӵ�str2��ȥ

int main()
{
    char str1[20] = {"aaaaaa"};
    char str2[20] = {"aabbcc"};
    strcat(str1, str2);
    puts(str1);
    return 0;
}