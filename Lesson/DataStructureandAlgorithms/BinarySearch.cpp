#include <stdio.h>

int arr[50], n;

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

int BinarySearch(int arr[], int n, int x)
{
    int l = 0, r = n - 1; // Trước tiên phải đặt left(l) là chỉ số của phần tử đầu tiên, right(r) là chỉ số phần tử cuối cùng.
    int mid;
    while (l <= r)
    {
        int mid = l + (r - l) / 2; // hoặc mid = (l + r) / 2 ; => Lấy vị trí chính giữa của mảng.

        if (arr[mid] == x) // Nếu arr[mid] = x, trả về chỉ số và kết thúc.
            return mid;
        else if (arr[mid] < x) // Nếu x lớn hơn phần tử ở giữa thì vị trí cần tìm nằm ở bên phải.
            l = mid + 1;       // Lúc này thực hiện chia nửa bên phải bằng cách gán l = mid + 1;
        else

            // (arr[mid] > x) Nếu x nhỏ hơn phần tử ở giữa thì vị trí cần tìm nằm ở bên trái.
            r = mid - 1; // Lúc này thực hiện chia nửa bên trái bằng cách gán r = mid -1;
    }
    return -1;
}

int main()
{
    printf("=====================BinarySearch====================\n");
    nhapmang(arr, n);
    printf("Mang ban vua nhap: ");
    xuatmang(arr, n);

    int x;
    printf("\nNhap x: ");
    scanf("%d", &x);

    int result = BinarySearch(arr, n, x);
    (result == -1) ? printf("\n=> %d khong duoc tim thay!", x) : printf("\n=> %d duoc tim thay!", x);
}