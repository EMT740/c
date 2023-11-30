#include <stdio.h>
int main()
{
    FILE *fp = NULL;          // 定义一个指针变量
    fp = fopen("1.txt", "r"); // 打开文件（文件路径，打开方式）
    // r只读
    if (fp != NULL)
    {
        printf("文件打开成功");
    }
    // 数据操作
    //    fgetc(文件指针) 会返回读取到的字符
    char ch = fgetc(fp);
    printf("ch=%c\n", ch);
    ch = fgetc(fp);
    printf("ch=%c\n", ch);
    return 0;
}