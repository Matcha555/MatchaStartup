#include <stdio.h>
#include <string.h>

/*
+ Hàm strupr() được sử dụng để chuyển một chuỗi nhất định thành chữ hoa.
+ Hàm strlwr() được sử dụng để chuyển một chuỗi nhất định thành chữ thường.
*/

void Up(char a[])
{
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 97 && a[i] <= 122)
            a[i] -= 32;
    }
}

void Down(char a[])
{
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
            a[i] += 32;
    }
}

int main()
{
    char a[50];
    // char b[50];

    printf("\n-----------\nPress a: ");
    fgets(a, sizeof(a), stdin);
    // printf("Press b: ");
    // fgets(b, sizeof(b), stdin);

    printf("a: %s", a);
    strupr(a);
    printf("Result: %s", a);
    strlwr(a);
    printf("Result: %s", a);

    // printf("\nb: %s", b);
    // strupr(b);
    // printf("\nResult: %s", b);
    // strlwr(b);
    // printf("\nResult: %s", b);

    Up(a);
    printf("Up: %s", a);
    Down(a);
    printf("Down: %s", a);
}