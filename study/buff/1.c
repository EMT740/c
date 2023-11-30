#include<stdio.h>

//声明一个结构体类型，作为结点
typedef struct node
{
    int id;
    struct node* next;//指针域
}NODE;//NODE为这个结构体的小名

//申请一个头结点
//返回头结点的地域
NODE* init()
{
    NODE* temp=malloc(sizeof(NODE));
    //初始化头结点的数据以及指针
    temp->id=0;
    temp->next=NULL;
    return temp;
}

//增加数据头插法
void insert(NODE* head,int data)  //head需传回
{
    //申请一个新的内存，作为结点的储存空间
    NODE* S=(NODE*)malloc(sizeof(NODE));
    //保存数据
    S->id=data;
    //结点连接到单链表中成为新的首结点
    S->next=head->next;
    head->next=S;
}

//输出链表中元素
void print(NODE* head)
{
    NODE* p=head->next;//p指向首元结点
    while (p!=NULL)
    {
        printf("%d->",p->id);
        p=p->next;
    }
    printf("NULL\n");
}

//修改结点元素 根据指定数据val修改元素 data修改成的数据
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
    NODE* head=NULL;//指向头结点
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
