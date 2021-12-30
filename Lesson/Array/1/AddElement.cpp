#include <stdio.h>
// khi chèn thì số lượng phần tử tăng lên.

int arr[50], n;

void nhapMang(int arr[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void xuatMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int nhapVTCC(int n)
{

    int VTCanChen = -1;
    while (VTCanChen < 0 || VTCanChen >= n)
    {
        printf("\nNhap VTCanChen(0 <= VTCanChen < n): ");
        scanf("%d", &VTCanChen);
    }
    return VTCanChen;
}

void chen(int arr[], int &n, int VTCanChen, int soCanChen)
{
    for (int i = n; i >= VTCanChen; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[VTCanChen] = soCanChen; // Gán số cần chèn vào vị trí cần chèn.
    n++;                        // Xong khi chèn xong thì số lượng phàn tử tăng lên.
}

int main()
{
    do
    {
        printf("Nhap so luong phan tu: ");
        scanf("%d", &n);
    } while (n <= 0);

    nhapMang(arr, n);
    printf("\nMang vua nhap la: ");
    xuatMang(arr, n);

    int VTCanChen, soCanChen;
    VTCanChen = nhapVTCC(n);
    printf("\nNhap so can chen: ");
    scanf("%d", &soCanChen);
    printf("\nMang sau khi chen: ");
    chen(arr, n, VTCanChen, soCanChen);

    xuatMang(arr, n);
}