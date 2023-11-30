/* typedef int(*funp)(int,int);
给int()(int,int)类型的函数指针取一个别名为funp
funp p1;//使用别名funp定义int()(int,int)类型的函数指针p1
p1=sum;//使函数指针p1指向函数sum
p1(1,2);//通过函数指针p1调用函数sum */
/******************************************************************************************************************************/
/* #include<stdio.h>
#include<stdilb.h>
typedef int(*P)(int,int);//P为一个类型，为函数指针类型
void fun3(P pa,int x,int y)//可以使用这个类型定义指针变量P pa
//pa是一个指针变量类型为P
{
    printf("%d\n",pa(x,y));
}
int main()
{n
    fun3(MUL,2,6);

return 0;
} */ 