#include <stdio.h>

/*
    i =      0     1     2     3     4

  a[i] =     1  |  2  |  3  |  4  |  5           Mảng có 5 phần tử: a = {1,2,3,4,5} hoặc a[5].

    n =      1     2     3     4     5


*/

/* int main()
{
    int a[100];
    int n;

    do
    {
        printf("Press the elements of the array (0<n<=100): ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);

    // Nhap du lieu cho mang
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    // Xuat du lieu cua mang
    printf("You type: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i]; // sum= sum+a[i];
    }
    printf("\nSum = %d", sum);

    return 0;

} */

// Hàm nhập mảng
void NhapMang(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d] = ", i); // i: vị trí thư i để cho người dùng nhập vào
        scanf("%d", &a[i]);         // &a[i]: lấy địa chỉ a tại vị trí thứ i (i lần lượt là 0,1,2,3,4,5...).
    }
}

// Hàm xuất mảng
void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
}

// Hàm giá trị tăng dần
void TangDan(int a[], int n)
{
    int tg;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}

// Hàm giá trị giảm dần
void GiamDan(int a[], int n)
{
    int tg;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}

int main()
{
    int a[50], n;

    printf("\nNhap so luong phan tu n = ");
    do
    {
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("\nNhap lai n = ");
        }
    } while (n <= 0);

    NhapMang(a, n);

    printf("\nMang vua nhap la: ");
    XuatMang(a, n);

    // Sap xep tang dan:
    TangDan(a, n);
    printf("\nMang sap xep tang dan la: ");
    XuatMang(a, n);

    // Sap xep giam dan:
    GiamDan(a, n);
    printf("\nMang sap xep giam dan la: ");
    XuatMang(a, n);
}