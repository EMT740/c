#include<stdio.h>
//����һ���������������������붯̬�ڴ����������
//��������Ϊvoid
//��������ָ�����������һ��ָ�����


int main()
{
    int a=10;//������int
    int * p1=&a;//p1��һ��ָ��
    //������int*
    int**p2=&p1;//p2�Ƕ���ָ�룬�������һ��ָ������ĵ�ַ
    //������int**
    int***p3=&p2;//p3������ָ�������������Ƕ���ָ������ĵ�ַ
    //.......

    int * buff=NULL;//buff��������Ķ�̬�ڴ洫buff

    return 0;
}