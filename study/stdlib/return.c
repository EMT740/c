#include <stdio.h>

int *fun1()
{
    int b = 20;
    return &b; // �ֲ�����
}
//�Ӷ��������ڴ�
//���شӶ���������ڴ�
int *fun2()
{
    int* temp=(int*) malloc(25*sizeof(int));
    //temp��ʱ�����ַ
    return temp;
}
int main()
{
    int a = 10;
    int *p = &a;
    p = fun1();
    printf("%d\n", *p);//�����﷨�����������߼�
    printf("%d\n", *p);
    int *buff=NULL;//�Ӷ��������ڴ�
    buff=fun2();
    free(buff);
    return 0;
}