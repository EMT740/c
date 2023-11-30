//读取整个文件数组
#include<stdio.h>

int main()
{
     FILE *fp2 = NULL;           // 定义一个指针变量
    fp2 = fopen("2.txt", "r+"); // 打开文件（文件路径，打开方式）
    char str[1024]={"\0"};
    int x=0;//x数组下标
//feof作用：判断文件是否到了末尾，如果到了末尾，返回真；否则返回假
    while(!feof(fp2))
    {
        str[x]=fgetc(fp2);
        putchar (str[x]);
        x++;
    }
    return 0;
}