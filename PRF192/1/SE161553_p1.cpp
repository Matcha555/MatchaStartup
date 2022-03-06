#include <stdio.h>

int main()
{
    int a, b;
    printf("Press a and b: ");
    scanf("%d%d", &a, &b);

    printf("\n-----------\n");
    printf("Addition: %d + %d = %d", a, b, a + b);
    printf("\nSubtraction: %d - %d = %d", a, b, a - b);
    printf("\nMultiplication: %d * %d = %d", a, b, a * b);
    printf("\nDivision: %d / %d = %d", a, b, a / b);
}
