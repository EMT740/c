#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5  , 6, 7, 8, 9, 0};
    for (int j = 0; j < 10; j++)
    {
        printf("arr[%d]: %#p\n", j, &arr[j]); // �������Ԫ�صĵ�ַ %p�ǵ�ַռλ��
    }
    // ����ָ����� ���� ����Ԫ�صĵ�ַ
    int *p = arr; // ��ַ���׵�ַ��arr &arr[0]
    p = p + 4;
    printf("%d\n", *p);
    printf("%#p", p);
    return 0;
}