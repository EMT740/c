#include <stdio.h>

struct node
{
    int id;
    char name[20];
    struct node *next; // 添加自身类型的成员
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
                printf("%s\n",(p+j)->name);//输出5人名字
            }
            while (p!=NULL)
            {
                printf("%s\n",p->name);
                p=p->next;//访问next成员，得到next地址

            }
            
    return 0;
}