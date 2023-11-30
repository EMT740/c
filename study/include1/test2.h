#pragma once
#include"test1.h"


void fun2()
{
    printf("\n\n调用函数:\n");
    fun1();
    printf("在fun2中调用fun1");
}