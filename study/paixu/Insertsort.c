#include <stdio.h>
#define N 10
// 分为有序部分与无序部分
void Insertsort(int arr[], int n)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    for (i = 1; i <= n - 1; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (temp < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

int main()
{
    int arr[N] = {3, 4, 2, 1, 7, 8, 5, 9, 6, 10};
    Insertsort(arr, N);
    for (int j = 0; j < N; j++)
    {
        printf("%d\t", arr[j]);
    }

    return 0;
}