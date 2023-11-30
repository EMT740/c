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
    STU arr[3] = {
        {11, "a", 22},
        {22, "b", 33},
        {33, "b", 44}};
    for (int j = 0; j < 3; j++)
    {
        printf("%d %s %d\n", arr[j].id, arr[j].name, arr[j].age);
    }
    return 0;
}
