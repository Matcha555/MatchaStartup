#include <stdio.h>

int main()
{
    int a, b;
    char opera;
    printf("\nNhap phep toan: ");
    scanf("%c", &opera);

    printf("\nNhap vao 2 so a, b: ");
    scanf("%d%d", &a, &b);

    switch (opera)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("Khong the chia cho 0!");
        }
        else
        {
            printf("%d / %d = %.2f", a, b, (float)a / b);
        }
        break;

    default:
        printf("Khong co phep toan %c!", opera);
        break;
    }
}