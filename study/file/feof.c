//��ȡ�����ļ�����
#include<stdio.h>

int main()
{
     FILE *fp2 = NULL;           // ����һ��ָ�����
    fp2 = fopen("2.txt", "r+"); // ���ļ����ļ�·�����򿪷�ʽ��
    char str[1024]={"\0"};
    int x=0;//x�����±�
//feof���ã��ж��ļ��Ƿ���ĩβ���������ĩβ�������棻���򷵻ؼ�
    while(!feof(fp2))
    {
        str[x]=fgetc(fp2);
        putchar (str[x]);
        x++;
    }
    return 0;
}