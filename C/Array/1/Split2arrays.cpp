#include <stdio.h>

int arr[50], arr2[50], arr3[100];
int n, m, l;

void nhapmang(int arr[], int &n)
{
    do
    {
        printf("Nhap so luong phan tu: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 50);
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void xuatmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void tachmang(int arr[], int n, int arr2[], int &m, int arr3[], int &l)
{
    int j = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr2[j++] = arr[i];
            m++; // Tăng phần tử trong mảng b
        }
        else
        {
            arr3[k++] = arr[i];
            l++; // Tăng phần tử trong mảng c
        }
    }
}

int main()
{
    printf("\n---------\n");
    nhapmang(arr, n);
    printf("Mang vua nhap la: ");
    xuatmang(arr, n);

    tachmang(arr, n, arr2, m, arr3, l);
    printf("\n\n=> Mang chan: ");
    xuatmang(arr2, m);
    printf("\n=> Mang le: ");
    xuatmang(arr3, l);
}