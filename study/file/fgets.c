#include <stdio.h>
int main()
{
    FILE *fp = NULL;         // 定义一个指针变量
    fp = fopen("1.txt", "r"); // 打开文件（文件路径，打开方式）
        //r只读
        if (fp != NULL)
    {
        printf("文件打开成功\r\n");
    }
    // 数据操作
//    fgets(容器首地址，读取多少个字符，文件指针) 会返回读取到的字符
char s1[100]={"\0"};
fgets(s1,6,fp);
puts(s1);
return 0;
}