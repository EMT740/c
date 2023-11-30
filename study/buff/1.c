#include<stdio.h>

//����һ���ṹ�����ͣ���Ϊ���
typedef struct node
{
    int id;
    struct node* next;//ָ����
}NODE;//NODEΪ����ṹ���С��

//����һ��ͷ���
//����ͷ���ĵ���
NODE* init()
{
    NODE* temp=malloc(sizeof(NODE));
    //��ʼ��ͷ���������Լ�ָ��
    temp->id=0;
    temp->next=NULL;
    return temp;
}

//��������ͷ�巨
void insert(NODE* head,int data)  //head�贫��
{
    //����һ���µ��ڴ棬��Ϊ���Ĵ���ռ�
    NODE* S=(NODE*)malloc(sizeof(NODE));
    //��������
    S->id=data;
    //������ӵ��������г�Ϊ�µ��׽��
    S->next=head->next;
    head->next=S;
}

//���������Ԫ��
void print(NODE* head)
{
    NODE* p=head->next;//pָ����Ԫ���
    while (p!=NULL)
    {
        printf("%d->",p->id);
        p=p->next;
    }
    printf("NULL\n");
}

//�޸Ľ��Ԫ�� ����ָ������val�޸�Ԫ�� data�޸ĳɵ�����
void change(NODE* head,int val,int data)
{
    NODE* p=head->next;
    while (p!=NULL)
    {
        if(p->id==val)
        {
            p->id=data;
        }
        p=p->next;
        /* code */
    }
}

int main()
{
    NODE* head=NULL;//ָ��ͷ���
    head=init();
    printf("head=%#p\n\n",head);

    for (int i = 0; i < 4; i++)
    {
        insert(head,i+1);
    }
    print(head);

    change(head,3,66);
    print(head);
    return 0;
}
