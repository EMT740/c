//�Խ��Ʒ�ʽ���ļ�
#include <stdio.h>
int main()
{
  FILE *fp3=NULL;
  fp3=fopen("3.txt","wb+");
  int a =100;
  int b=0;
  fwrite(&a,4,2,fp3);//(arr,size,n,fp)
  rewind(fp3);//ǰһ��ʹָ�뵽ĩβ������ؼ���ʹָ�뵽��ͷ
  fread(&b,4,2,fp3); //(buffer,size,count,fp)
  printf("%d",b);
  fclose(fp3);
  return 0;
}
