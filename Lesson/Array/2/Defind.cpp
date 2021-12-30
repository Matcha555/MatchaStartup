// Mảng 2 chiều là kiểu mảng chứa các mảng khác bên trong nó.

/* Khai báo:
Kiểu biến_tên biên[số hàng][số cột];
VD: int a[3][5];
*/

#include <stdio.h>

int arr[50][50];
int m, n;

void nhapmang(int arr[][50], int &m, int &n) // Giá trị m và n sẽ bị thay đổi
{
    do
    {
        printf("Nhap gia tri m va n: ");
        scanf("%d%d", &m, &n);
    } while (m <= 0 || n <= 0);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]); // Lấy vị trí tại vị trí hàng i và cột j.
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

int main()
{
    nhapmang(arr, m, n);
    xuatmang(arr, m, n);
}