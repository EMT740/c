#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)malloc(25 * sizeof(int)); // ��̬�ڴ������ݻ�Ĭ�ϳ�ʼ��Ϊ0
    for (int j = 0; j < 25; j++)
    {
        p[j] = j + 1;
    } // �ڴ治��
    // 1�����������ڴ�
    int *q = (int *)malloc(50 * sizeof(int));
    // 2����ԭ�����ڴ����ݣ��������µ��ڴ���
    for (int j = 0; j < 25; j++)
    {
        q[j] = p[j];
    }
    // 3���ͷž��ڴ�
    free(p); // �ͷŵĲ���ָ��p������pָ�����Ƭ�ڴ�
    // ʹָ�����ָ���µ��ڴ�
    p = q;
    for (int j = 25; j < 50; j++)
    {
        p[j] = j + 1;
    }
    for (int j = 0; j < 50; j++)
    {
        printf("%d\t", q[j]);
    }
    return 0;
}