#include<stdio.h>
//定义一个函数，函数功能是申请动态内存给到主函数
//返回类型为void
//参数二级指针变量来接受一级指针变量


int main()
{
    int a=10;//基类型int
    int * p1=&a;//p1是一级指针
    //基类型int*
    int**p2=&p1;//p2是二级指针，保存的是一级指针变量的地址
    //基类型int**
    int***p3=&p2;//p3是三级指针变量，保存的是二级指针变量的地址
    //.......

    int * buff=NULL;//buff管理申请的动态内存传buff

    return 0;
}