#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5  , 6, 7, 8, 9, 0};
    for (int j = 0; j < 10; j++)
    {
        printf("arr[%d]: %#p\n", j, &arr[j]); // 输出数组元素的地址 %p是地址占位符
    }
    // 定义指针变量 保存 数组元素的地址
    int *p = arr; // 地址的首地址：arr &arr[0]
    p = p + 4;
    printf("%d\n", *p);
    printf("%#p", p);
    return 0;
}