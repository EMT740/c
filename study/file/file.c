#include <stdio.h>
int main()
{
    FILE *fp = NULL;         // ����һ��ָ�����
    fp = fopen("1.txt", "w"); // ���ļ����ļ�·�����򿪷�ʽ��
        if (fp != NULL)
    {
        printf("�ļ��򿪳ɹ�");
    }
    // ���ݲ���
    int A=123;
    fputc(A, fp); // д���ַ����ַ����ļ�ָ�룩
   
    return 0;
}