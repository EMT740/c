#include <stdio.h>
// �ṹ����������
struct student
{
    int id;      // �����������Ҫ��һ��
    char name;   // �������
    float score; // �������ȫ�Ʋ���struct Ҳ����student������struct student
}stu2;//����stu2

int main()
{
struct student stu3={1,"z",20};
printf("%d %s %f\n",stu3.id,stu3.name,stu3.score);
    return 0;
}
