//calloc(unsigned n,int size);
//���Է���n����СΪsize�������ڴ����򣬿���Ϊһά���鿪�ٶ�̬�ڴ�ռ�
//���磺int *p=(int*)calloc(10,sizeof(int));
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int*p=(int*)calloc(25,sizeof(int));//��̬�ڴ������ݻ�Ĭ�ϳ�ʼ��Ϊ0
    /* for(int j=0;j<25;j++)
    {
        printf("%d\t",*(p+j));
    } */
    //realloc//���Ըı�������ڴ��С realloc(ָ�룬�޸ĵĴ�С)
    realloc(p,50*sizeof(int));
    for(int j=0;j<50;j++)
    {
        printf("%d\t",*(p+j));
    }
    return 0;
}