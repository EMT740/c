#include <stdio.h>

struct none
{
    int id;
    char name[20];
};

int main()
{
    struct none n[5] =
        {
            {1, "aaa"},
            {2, "bbb"},
            {3, "ccc"},
            {4, "ddd"},
            {5, "eee"}};
    struct none *p = n;
    printf("%d\n", sizeof(struct none));
    // p++;
    printf("%d\n", (*(p + 3)).id);
    printf("%d %s\n",(*(p+2)).id,(*p).name);
    printf("%d %s\n",(p+2)->id,p->name);
    return 0;
}