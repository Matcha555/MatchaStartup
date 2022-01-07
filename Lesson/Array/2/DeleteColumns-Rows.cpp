#include <stdio.h>

int arr[50][50], m, n;

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

void DeleteRow(int arr[][50], int &m, int n) // Sau khi xóa hàng, phần tử m sẽ thay đổi.
                                             // k: Dòng muốn xóa
{
    int k;
    printf("Press k you wanna delete: ");
    scanf("%d", &k);
    if (k < 0 || k >= m)
        return;

    for (int i = k; i < m - 1; i++) // i = k: chạy bắt đầu vị trí k muốn xóa;  i < m - 1: chỉ chạy đến gần đến cuối mảng.
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = arr[i + 1][j]; // Sau khi xóa hàng k muốn xóa, các hàng dưới dồn lên hàng trên ..
        }
    }
    m--;
}

void DeleteColumn(int arr[][50], int m, int &n)
{
    int l;
    printf("Press l you wanna delete: ");
    scanf("%d", &l);
    if (l < 0 || l >= n)
        return;

    for (int i = 0; i < m; i++)
    {
        for (int j = l; j < n - 1; j++)
        {
            arr[i][j] = arr[i][j + 1];
        }
    }
    n--;
}

int main()
{
    printf("\n------------\n");
    Import(arr, m, n);
    Export(arr, m, n);

    // DeleteRow(arr, m, n);
    // Export(arr, m, n);

    DeleteColumn(arr, m, n);
    Export(arr, m, n);
}