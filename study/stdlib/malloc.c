#include <stdio.h>
#include <stdlib.h>

int main()
{
    // malloc(100) �Ӷ�������100�ֽڴ�С���ڴ�
    int *p = (int *)malloc(100); // ָ�����������Ӷ���������ڴ�
    // int *p = (int *)malloc(25*sizeof(int));һ������ʹ��
    *p = 10;
    *(p + 1) = 20;
    printf("%d %d\n", *p, *(p + 1));
    printf("%d %d\n", p[0], p[1]);
    //[]Ҳ�н����õ�����
    free(p);
    return 0;
}