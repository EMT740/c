#include <stdio.h>
int main()
{
    FILE *fp = NULL;         // ����һ��ָ�����
    fp = fopen("1.txt", "r"); // ���ļ����ļ�·�����򿪷�ʽ��
        //rֻ��
        if (fp != NULL)
    {
        printf("�ļ��򿪳ɹ�\r\n");
    }
    // ���ݲ���
//    fgets(�����׵�ַ����ȡ���ٸ��ַ����ļ�ָ��) �᷵�ض�ȡ�����ַ�
char s1[100]={"\0"};
fgets(s1,6,fp);
puts(s1);
return 0;
}