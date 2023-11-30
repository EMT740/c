#include <stdio.h>
#include<string.h>

int main ()
{
    char name1[20]= {"\0"};
    char name2[20]= {"\0"};
    gets(name1);
    scanf("%s",name2);
    puts(name1);
    printf("%s",name2);
    return 0;
}