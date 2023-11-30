#include <stdio.h>
#include <string.h>
typedef struct student
{
    int id;
    char name[20];
    int age;
} STU;

int main()
{
    STU arr[3];
    arr[1].id = 2;
    strcpy(arr[1].name,"zf");
    printf("%d %s\n", arr[1].id,arr[1].name);
    return 0;
}
