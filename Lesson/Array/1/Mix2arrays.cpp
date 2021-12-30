#include <stdio.h>
// Muốn trộn mảng một chiều thì mảng c phải bằng mảng a cộng với mảng b.

int arr[50], arr2[50], arr3[100];
int n;     // Số lượng phần tử mảng arr
int m;     // Số lượng phần tử mảng arr2
int l = 0; // Số lượng phần tử mảng arr3, l=0 vì mảng arr3 chưa có phần tử nào hết.

void nhapmang(int arr[], int &n)
{
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

// Trước tiên, phải sắp xếp mảng tăng dần
void sapxeptangdan(int arr3[], int l)
{
    int temp;
    for (int i = 0; i < l - 1; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (arr3[i] > arr3[j])
            {
                int temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }
}

// BỎ hết tất cả phần tử mảng arr và arr2 vào arr3
void tronmang(int arr[], int n, int arr2[], int m, int arr3[], int &l) // Sau khi bỏ hết phần tử mảng arr và arr2 vào arr3 thì số lượng phần tử mảng arr3(l) thay đổi, do đó cần có dấu & để thay đổi.
{
    // Bỏ hết phần tử mảng arr vào arr3
    for (int i = 0; i < n; i++)
    {
        arr3[l] = arr[i]; // Bỏ hết phần tử mảng arr vào arr3
        l++;              // số lượng phần tử mảng c tăng lên.
    }

    // Bỏ hết phần tử mảng arr2 vào arr3
    for (int i = 0; i < m; i++)
    {
        arr3[l] = arr2[i];
        l++;
    }
}

int main()
{

    printf("-------\n");
    do
    {
        printf("- Nhap so luong phan tu arr: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 50);
    nhapmang(arr, n);
    printf("Mang sau khi nhap: ");
    xuatmang(arr, n);

    do
    {
        printf("\n- Nhap so luong phan tu arr2: ");
        scanf("%d", &m);
    } while (m <= 0 || m > 50);
    nhapmang(arr2, m);
    printf("Mang sau khi nhap: ");
    xuatmang(arr2, m);

    tronmang(arr, n, arr2, m, arr3, l);
    sapxeptangdan(arr3, l);
    printf("\n\n=> Mang cuoi cung: ");
    xuatmang(arr3, l);
}