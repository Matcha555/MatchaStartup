#include <stdio.h>
#include <string.h>

/*Giá trị trả về:
+ 0: nếu cả 2 chuỗi giống hệt nhau
+ số nguyên âm: nếu giá trị của a < b
+ số nguyên dương: nếu giá trị của a > b
*/

int Compare(char a[], char b[])
{
    size_t min = strlen(a) < strlen(b) ? strlen(a) : strlen(b);

    // Vòng lặp duyệt từng ký tự để so sánh
    for (int i = 0; i < min; i++)
    {
        if (a[i] > b[i]) // Chuỗi a > b
            return 1;
        else if (a[i] < b[i]) // Chuỗi a < b
            return -1;
    }

    // Sau khi chạy hết vòng lặp, thấy không thay đổi gì, chuyển sang kiểm tra độ dài chuỗi
    // Nếu độ dài chuỗi nào lớn hơn thì chuỗi đó lớn hơn.
    if (strlen(a) > strlen(b))
        return 1;
    else if (strlen(a) < strlen(b))
        return -1;
    return 0; // 2 độ dài có chuỗi như nhau.
}

int main()
{
    char a[50];
    char b[30];

    printf("\nPress a: ");
    fgets(a, sizeof(a), stdin);
    printf("Press b: ");
    fgets(b, sizeof(b), stdin);

    printf("\nCompare: %d", strcmp(a, b));
    printf("\n-------------");
    if (Compare(a, b) > 0)
        printf("\na > b");
    else if (Compare(a, b) < 0)
        printf("\na < b");
    else
        printf("\na = b");
}