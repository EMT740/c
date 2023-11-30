#include<stdio.h>

int arr[100];
int num=0;//表示元素表中的元素个数
int maxsize=100;//最大容量

//元素的额增加
void insert(int data)//接受元素
{
    if(num<maxsize)
    {
    arr[num]=data;
    num++;
    }
    else
    {
        printf("容器已满");
    }
}

//元素的输出
void print()
{
    for(int j=0;j<num;j++)
    {
        printf("%d\t",arr[j]);
    }
    printf("\n\n");
}

//修改元素
void change(int val,int data)//要修改的数据 修改成的数据
{
    for(int j=0;j<num;j++)
    {
        if(arr[j]==val)
        {
            arr[j]=data;
            //return;//只修改一次
        }
    }

}
//元素查找
void find(int val)//指定的数
{
    for(int j=0;j<num;j++)
    {
        if(arr[j]==val)
        {
            printf("位置在%d\n",j);
        }
    }
}

//元素的删除
void delete(int val)
{
    for(int j=0;j<num;j++)
    {
        if(arr[j]==val)
        {
           int n=j;//记录下标
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
        insert(j+1);//添加元素
    }
    print();//输出元素
    change(6,66);
    print();
    find(4);
    delete(2);
    print();
    
    return 0;
}