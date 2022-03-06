#include <stdio.h>

int main()
{
    // int arr[] = {1, 2, 3, 4, 5};   //tên của mảng được xem là biến con trỏ luôn; địa chỉ của tên mảng trùng với địa chỉ của phần tử đầu tiên
    // printf("Mang: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", &arr[i]);
    // }

    // printf("\nDia chi cua bo nho: %d", &arr);
    // printf("\nDia chi cua bo nho: %d", &arr[0]);

    int arr[10], n = 3;

    printf("Nhap cac gia tri cua mang: \n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", arr + i); // arr + i: chính là địa chỉ(tăng dần arr[0] + 1 = arr[1] -> arr[1] + 1 = arr[2],...    )
    }

    printf("Gia tri cua mang la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i)); //*(arr+1): lây giá trị.
    }

    return 0;
}