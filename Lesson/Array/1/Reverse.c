#include <stdio.h>

/* Đảo ngược mảng 1 chiều
VD: 1469 ==> 9641 */

/*
    i = 0     1     2     3     4

        1  |  2  |  3  |  4  |  5           Mảng có 5 phần tử: a = {1,2,3,4,5} hoặc a[5].

    n = 1     2     3     4     5


*/

void xuatMang(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {

        printf("%d ", a[i]);
    }
}

/* void DaoNguoc(int a[], int n) // Cách 1: chỉ in mảng muốn ngược.
{
    printf("\nMang dao nguoc la: ");
    for (int i = n - 1; i >= 0; i--) // i = n -1: có nghĩa là đi từ lớn tới nhỏ. Có 5 phần tử thì bắt đầu phần tử thứ 4.
    {
        printf("%d ", a[i]);
    }
} */

void Reverse(int a[], int n) // Cách 2: in mảng ngược thật sự.
{
    for (int i = 0; i < n / 2; i++) // i < n/2: có nghĩa i đến số kế trước và sau số giữa sẽ dừng lại. VD: a = {5,6,7,2,3} i xét đến số 6 và 2 sẽ dừng lại.
    {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}

int main()
{

    int a[50], num;
    printf("Press array : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Mang vua nhap: ");
    xuatMang(a, num);
    //  DaoNguoc(a, num);

    printf("\nReverse: ");
    Reverse(a, num);
    xuatMang(a, num);
}
