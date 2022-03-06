#include <stdio.h>

/* Thuật toán tìm kiếm tuyến tính (linear search) hay còn gọi là thuật toán tìm kiếm tuần tự (Sequential search)
là một phương pháp tìm kiếm một phần tử cho trước trong một danh sách bằng cách duyệt lần lượt từng phần tử của danh sách
đó cho đến lúc tìm thấy giá trị mong muốn hay đã duyệt qua toàn bộ danh sách.
*/

int arr[50], n;
void nhapMang(int arr[], int &n)
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

void xuatMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int linearsearch(int arr[], int n, int x) // x: là số cần tìm
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return 1;
        }
    }
    return -1;
}

int main()
{
    printf("\n=====================Linearsearch====================\n");

    nhapMang(arr, n);
    printf("Mang ban vua nhap: ");
    xuatMang(arr, n);

    int x;
    printf("\nNhap x: ");
    scanf("%d", &x);
    int result = linearsearch(arr, n, x);
    (result == -1) ? printf("==> %d khong duoc tim thay ", x) : printf("==> %d duoc tim thay", x); // => Cach 1

    /* if (result == 1)   => Cach 2
    {
        printf("%d duoc tim thay.", x);
    }
    else
    {
        printf("%d khong duoc tim thay.", x);
    } */
}