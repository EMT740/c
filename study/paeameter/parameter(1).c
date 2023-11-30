//直接传递
#include <stdio.h>

int fun(int x, int y)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            printf("*");
        }
        printf("\n");
    }
  return 1;
}

int main()
{
    fun(4, 3);
    return 0;
}
