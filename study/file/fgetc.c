#include <stdio.h>
int main()
{
    FILE *fp = NULL;          // ����һ��ָ�����
    fp = fopen("1.txt", "r"); // ���ļ����ļ�·�����򿪷�ʽ��
    // rֻ��
    if (fp != NULL)
    {
        printf("�ļ��򿪳ɹ�");
    }
    // ���ݲ���
    //    fgetc(�ļ�ָ��) �᷵�ض�ȡ�����ַ�
    char ch = fgetc(fp);
    printf("ch=%c\n", ch);
    ch = fgetc(fp);
    printf("ch=%c\n", ch);
    return 0;
}