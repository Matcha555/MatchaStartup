#include <stdio.h>
int arr[50][50], m, n;

void Import(int arr[][50], int &m, int &n)
{
    do
    {
        printf("Enter m and n: ");
        scanf("%d%d", &m, &n);
    } while (m <= 0 || n <= 0);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void Export(int arr[][50], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int FindMax(int arr[][50], int m, int n)
{
    int max = arr[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (max < arr[i][j]) // 5 12 4 5 6 .Đầu tiên min = 5,  xét 5 > 12? Không, cho nên xét tiếp số sau. 5>4? Đúng.
                max = arr[i][j]; // Sau khi xét 5 > 4 thì gán min = 4. Rồi cứ tiếp như thế xem số nào nhỏ hơn thì gán vào min đến hết mảng.
        }
    }
    return max;
}

int FindMin(int arr[][50], int m, int n)
{
    int min = arr[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (min > arr[i][j])
                min = arr[i][j];
        }
    }
    return min;
}

int main()
{
    printf("\n-----------\n");
    Import(arr, m, n);
    Export(arr, m, n);
    printf("Min = %d", FindMin(arr, m, n));
    printf("\n");
    printf("Max = %d", FindMax(arr, m, n));
}