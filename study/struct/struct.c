#include <stdio.h>
#include <string.h>
// �ṹ����������
struct student
{
    int id;
    char name[20];
    float score; // �����������Ҫ��һ��
};               // �������
                 // �������ȫ�Ʋ���struct Ҳ����student������struct student
int main()
{
    struct student stu1;
    // ��.(��)���ʽṹ���г�Ա
    stu1.id = 1;
    strcpy(stu1.name, "zf"); // stu1.name="z"��������ֱ�Ӹ�ֵ,strcpy �ַ���������
    stu1.score = 99.5;
    printf("%d %s %f\n", stu1.id, stu1.name, stu1.score);

    return 0;
}
