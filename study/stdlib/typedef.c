/* typedef int(*funp)(int,int);
��int()(int,int)���͵ĺ���ָ��ȡһ������Ϊfunp
funp p1;//ʹ�ñ���funp����int()(int,int)���͵ĺ���ָ��p1
p1=sum;//ʹ����ָ��p1ָ����sum
p1(1,2);//ͨ������ָ��p1���ú���sum */
/******************************************************************************************************************************/
/* #include<stdio.h>
#include<stdilb.h>
typedef int(*P)(int,int);//PΪһ�����ͣ�Ϊ����ָ������
void fun3(P pa,int x,int y)//����ʹ��������Ͷ���ָ�����P pa
//pa��һ��ָ���������ΪP
{
    printf("%d\n",pa(x,y));
}
int main()
{n
    fun3(MUL,2,6);

return 0;
} */ 