#include <stdio.h>

int main()
{
    FILE *fp2 = NULL;           // ����һ��ָ�����
    fp2 = fopen("2.txt", "w+"); // ���ļ����ļ�·�����򿪷�ʽ��
    // w+д
    int a = 10;
    char s1[20] = "abcdefg";
    fprintf(fp2, "%d\t%s", a, s1); // ��ʽ���������fprintf�����ļ�д������fprintf(�ļ�ָ�룬����ʽ���ַ�����������б�)                              // ��Ҫ�ļ�ָ��ָ���ļ���ͷ
    rewind(fp2);                   // ʹָ�뵽��ͷ
    int a1 = 0;
    char s2[20];
    fscanf(fp2, "%d\t%s", &a, s2);
    printf("a1=%d\ts2=%s", a1, s2);

    fclose(fp2);
    return 0;
}