#include <stdio.h>
int main()
{
    FILE *fp = NULL;         // 定义一个指针变量
    fp = fopen("1.txt", "w"); // 打开文件（文件路径，打开方式）
        if (fp != NULL)
    {
        printf("文件打开成功");
    }
    // 数据操作
    int A=123;
    fputc(A, fp); // 写入字符（字符，文件指针）
   
    return 0;
}