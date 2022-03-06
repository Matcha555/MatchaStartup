#include <stdio.h>

int arr[50][50];
int m, n;

void nhapmang(int arr[][50], int &m, int &n)
{
    do
    {
        printf("Press m and n: ");
        scanf("%d%d", &m, &n);
    } while (m <= 0, m > 50 || n <= 0, n > 50);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void xuatmang(int arr[][50], int m, int n)
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

int Find(int arr[][50], int m, int n, int x)
{
    int kq = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == x)
                kq = 1;
        }
    }
    return kq;
}

void Finding(int arr[][50], int m, int n)
{
    int c;
    // Cho phép tìm kiếm nhiều lần

    do
    {
        int x;
        printf("You wanna search: ");
        scanf("%d", &x);
        int kq = Find(arr, m, n, x);
        (kq == 1) ? printf("\n=> %d duoc tim thay!", x) : printf("\n=> %d khong duoc tim thay!", x);

        printf("\nEnter any number to continue except 0...");
        scanf("%d", &c);
    } while (c != 0);
}

int main()
{
    printf("\n----------\n");
    nhapmang(arr, m, n);
    xuatmang(arr, m, n);
    Finding(arr, m, n);
}