#include<stdio.h>

int arr[100];
int num=0;//��ʾԪ�ر��е�Ԫ�ظ���
int maxsize=100;//�������

//Ԫ�صĶ�����
void insert(int data)//����Ԫ��
{
    if(num<maxsize)
    {
    arr[num]=data;
    num++;
    }
    else
    {
        printf("��������");
    }
}

//Ԫ�ص����
void print()
{
    for(int j=0;j<num;j++)
    {
        printf("%d\t",arr[j]);
    }
    printf("\n\n");
}

//�޸�Ԫ��
void change(int val,int data)//Ҫ�޸ĵ����� �޸ĳɵ�����
{
    for(int j=0;j<num;j++)
    {
        if(arr[j]==val)
        {
            arr[j]=data;
            //return;//ֻ�޸�һ��
        }
    }

}
//Ԫ�ز���
void find(int val)//ָ������
{
    for(int j=0;j<num;j++)
    {
        if(arr[j]==val)
        {
            printf("λ����%d\n",j);
        }
    }
}

//Ԫ�ص�ɾ��
void delete(int val)
{
    for(int j=0;j<num;j++)
    {
        if(arr[j]==val)
        {
           int n=j;//��¼�±�
           for(;n<=num-1;n++)
           {
            arr[n]=arr[n+1];
            
           }
           num--;
        }
    }
}

int main()
{
    for(int j=0;j<10;j++)
    {
        insert(j+1);//���Ԫ��
    }
    print();//���Ԫ��
    change(6,66);
    print();
    find(4);
    delete(2);
    print();
    
    return 0;
}