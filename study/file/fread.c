//以进制方式打开文件
#include <stdio.h>
int main()
{
  FILE *fp3=NULL;
  fp3=fopen("3.txt","wb+");
  int a =100;
  int b=0;
  fwrite(&a,4,2,fp3);//(arr,size,n,fp)
  rewind(fp3);//前一个使指针到末尾，这个关键字使指针到开头
  fread(&b,4,2,fp3); //(buffer,size,count,fp)
  printf("%d",b);
  fclose(fp3);
  return 0;
}
