#include<stdio.h>
#define A 1+2//Ԥ����û�м��㹦��
#define ROW 5//��
#define COL 5//��

void fun(x)
{
printf("%d\n",A*3);
return 0;
}

int main()
{
    int arr[ROW][COL]={0};
    for (int i=0;i<ROW;i++)
    {
        for (int j=0;j<COL;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}