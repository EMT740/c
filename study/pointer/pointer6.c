#include <stdio.h>

struct node
{
    int id;
    char name[20];
    struct node *next; // ����������͵ĳ�Ա
};

int main()
{
    struct node n[5] =
        {

            {1, "aaa",&n[1]},
            {2, "bbb",&n[2]},
            {3, "ccc",&n[3]},
            {4, "ddd",&n[4]},
            {5, "eee",NULL}};
            struct node *p=n;
            for(int j=0;j<5;j++)
            {
                printf("%s\n",(p+j)->name);//���5������
            }
            while (p!=NULL)
            {
                printf("%s\n",p->name);
                p=p->next;//����next��Ա���õ�next��ַ

            }
            
    return 0;
}