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
        printf("%d", arr[i]);
    }
}

void chen(int arr[], int &n, int VTCanChen, int soCanChen)
{
    for (int i = n - 1; i >= VTCanChen; i--) // i--: dịch từ vị trí n-1, rồi dịch tiếp vị trí trước đó... đến đến VTCanChen
    {
        arr[i + 1] = arr[i];
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
    } while (n <= 0 || n > 50);
    nhapMang(arr, n);
    printf("\nMang vua nhap la: ");
    xuatMang(arr, n);

    int VTCanChen, soCanChen;
    do
    {
        printf("\nNhap vi tri can chen: ");
        scanf("%d", &VTCanChen);
    } while (VTCanChen < 0 || VTCanChen > n);
    printf("Nhap so can chen: ");
    scanf("%d", &soCanChen);
    printf("Mang sau khi chen: ");
    chen(arr, n, VTCanChen, soCanChen);

    xuatMang(arr, n);
}