#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)calloc(25, sizeof(int)); // ��̬�ڴ������ݻ�Ĭ�ϳ�ʼ��Ϊ0
    // realloc//���Ըı�������ڴ��С realloc(ָ�룬�޸ĵĴ�С)
    // ���ǲ����ʼ���ڴ��ϵ�����
    realloc(p, 50 * sizeof(int));
    for (int j = 0; j < 50; j++)
    {
        printf("%d\t", *(p + j));
    }
    return 0;
}