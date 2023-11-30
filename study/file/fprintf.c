#include <stdio.h>

int main()
{
    FILE *fp2 = NULL;           // 定义一个指针变量
    fp2 = fopen("2.txt", "w+"); // 打开文件（文件路径，打开方式）
    // w+写
    int a = 10;
    char s1[20] = "abcdefg";
    fprintf(fp2, "%d\t%s", a, s1); // 格式化输出函数fprintf：向文件写入数据fprintf(文件指针，“格式化字符串”，输出列表)                              // 需要文件指针指向文件开头
    rewind(fp2);                   // 使指针到开头
    int a1 = 0;
    char s2[20];
    fscanf(fp2, "%d\t%s", &a, s2);
    printf("a1=%d\ts2=%s", a1, s2);

    fclose(fp2);
    return 0;
}