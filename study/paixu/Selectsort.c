#include <stdio.h>
#define N 10

void Selectsort(int arr[], int n)
{
    int i = 0;
    int j = 0;
    int temp=0;
    int min = 0;
    for (i = 0; i <= n - 2; i++)
    {
        min = i;
        // ͨ��ѭ�����ҵ���С��ֵ�����򲿷֣�
        for (j = i + 1; j <= n - 1; j++)
        {
            if (arr[min] > arr[j]) // ����ȵ�ǰ��С������ҪС
            {
                min = j;
                //��������С�������±�
            }
        }
        // Ҫ�����С���ݵ�λ�� �� ��С�����ݽ��н���
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
int main()
{
    int arr[N] = {3, 4, 2, 1, 7, 8, 5, 9, 6, 0};
    Selectsort(arr, N);
    for (int j = 0; j < N; j++)
    {
        printf("%d\t", arr[j]);
    }

    return 0;
}