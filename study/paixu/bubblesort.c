#include <stdio.h>
#define N 10

void Bubblesort(int arr[], int n) // �������ܴ��ݵĸ���
{
    int i = 0;
    int j = 0;
    int temp = 0;
    // �Ƚ�һ��
    for (i = 0; i <= n - 1; i++)
    {
        for (j = 0; j <= n - 2; j++)
        {
            if (arr[j] > arr[j + 1]) // �������
            {
                // Ԫ�ؽ���
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[N] = {3, 4, 2, 1, 7, 8, 5, 9, 6, 0};
    Bubblesort(arr, N);
    for (int j = 0; j < N; j++)
    {
        printf("%d\t", arr[j]);
    }

    return 0;
}