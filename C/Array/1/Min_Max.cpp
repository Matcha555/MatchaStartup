#include <stdio.h>

int FindMin(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i]) // VD: 5 12 4 5 6 .Đầu tiên min = 5,  xét 5 > 12? Không, cho nên xét tiếp số sau. 5>4? Đúng.
            min = arr[i]; // Sau khi xét 5 > 4 thì gán min = 4. Rồi cứ tiếp như thế xem số nào nhỏ hơn thì gán vào min đến hết mảng.
    }
    return min;
}

int FindMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

int main()
{
    int arr[100], n;
    do
    {
        printf("Press elements(0<n<=100): ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }

    printf("\nMax = %d", FindMax(arr, n));
    printf("\nMin = %d", FindMin(arr, n));
}