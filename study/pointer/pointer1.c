#include <stdio.h>

// �ı�ָ�������ָ��
int main()
{
    int a = 10;
    int b = 20;
    int *p = &a;
    // *p = 1; //*p���൱���Ǳ���a����Ϊp������&a
    p = &b; // ����
    *p = 2;//����
    printf("%d",b);

    return 0;
}