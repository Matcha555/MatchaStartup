#include <stdio.h>
// Ma trận chuyển vị là một ma trận mà ở đó các hàng được thay thế bằng các cột, và ngược lại.

int arr[50][50], m, n;
int b[50][50];

void Import(int arr[][50], int &m, int &n)
{
    do
    {
        printf("Press m and n: ");
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

void Transpose(int arr[][50], int m, int n, int b[][50])
{
    for (int i = 0; i < n; i++) // Sau khi hoán vị, thì số lượng dòng m = số lượng cột n
    {
        for (int j = 0; j < m; j++) // Sau khi hoán vị, số lương cột n = số lượng dòng m
        {
            b[i][j] = arr[j][i];
        }
    }
}

int main()
{
    printf("\n----------------\n");
    Import(arr, m, n);
    Export(arr, m, n);

    Transpose(arr, m, n, b);
    printf("After transposed: \n");
    Export(b, n, m);
}