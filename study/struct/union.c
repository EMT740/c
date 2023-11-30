#include <stdio.h>
#include <string.h>
union data
{
    int id;
    char c[5];
};
int main()
{
    union data num1;
    num1.id = 10;
    printf("%d\n", num1.id);
    strcpy(num1.c, "abcd");
    printf("%d %s\n", num1.id, num1.c);//½«Ö®Ç°¸²¸Ç  
    return 0;
}
