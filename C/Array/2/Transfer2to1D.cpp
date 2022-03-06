#include <stdio.h>
// Chuyển mảng 2 chiều thành mảng 1 chiều.

int arr[50][50], m, n;
// Muốn chuyển đổi mảng 2 chiều sang mảng 1 chiều thì phải khai báo một mảng 1 chiều có kích thước arr[số cột * số dòng]
int b[2500], l;

void Import(int arr[][50], int &m, int &n)
{
    do
    {
        printf("Press elements: ");
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

void Transfer(int arr[][50], int m, int n, int b[], int &l)
{
    int k = 0;
    l = m * n; // Phần tử mảng 1 chiều = só dòng * số cột;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[k++] = arr[i][j];
        }
    }
}

void Export1D(int arr[], int n)
{
    printf("\nArray 1D: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}

int main()
{

    printf("\n---------------\n");
    Import(arr, m, n);
    Export(arr, m, n);

    Transfer(arr, m, n, b, l);
    Export1D(b, l);
}