#include <stdio.h>
/*
                        1     2    3    4
                        5     6    7    8
                        9    10    11    12

Trong mảng có 4 cột và 3 hàng, bắt đầu bằng i=0 và j=0.
Tìm vị trí i = 7? Đầu tiên lấy i chia cho số lượng cột(có 4 cột) -> i / 4 -> 7 / 4 = 1, dư 3-> Hàng 1, cột 3.
                                                                => Sô cần tìm là số 8.

*/

int arr[50][50], m, n;
int b[2500], l;

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

void Increase(int arr[][50], int m, int n)
{
    int k = m * n; // Tổng số phần tử trong mảng.
    for (int i = 0; i < k - 1; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (arr[i / n][i % n] > arr[j / n][j % n]) // i / n (phép chia): đang ở hàng nào;.
                                                       // i % n (số dư): đang ở cột nào.
            {
                int temp = arr[i / n][i % n];
                arr[i / n][i % n] = arr[j / n][j % n];
                arr[j / n][j % n] = temp;
            }
        }
    }
}

void Decrease(int arr[][50], int m, int n)
{
    int k = m * n; // Tổng số phần tử trong mảng.
    for (int i = 0; i < k - 1; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (arr[i / n][i % n] < arr[j / n][j % n]) // i / n (phép chia): đang ở hàng nào;.
                                                       // i % n (số dư): đang ở cột nào.
            {
                int temp = arr[i / n][i % n];
                arr[i / n][i % n] = arr[j / n][j % n];
                arr[j / n][j % n] = temp;
            }
        }
    }
}

int main()
{
    printf("\n---------------\n");
    Import(arr, m, n);
    Export(arr, m, n);

    Decrease(arr, m, n);
    printf("\nDecrease: ");
    printf("\n");
    Export(arr, m, n);

    Increase(arr, m, n);
    printf("\nIncrease: ");
    printf("\n");
    Export(arr, m, n);
}