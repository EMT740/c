#include<stdio.h>

int main()
{
char *p="abcdefg";//���������� ��һ�����������ܱ��ı�
puts(p);
while(*p)
{
    printf("%c\t",*(p++));//p1 ��������׵�ַ
}
    return 0;
}