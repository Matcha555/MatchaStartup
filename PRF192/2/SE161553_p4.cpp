#include <stdio.h>

void Temp(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    printf("Press a and b: ");
    scanf("%d%d", &a, &b);
    printf("Before: a = %d,b = %d", a, b);

    if (a == 0 || b == 0)
        return 0;

    Temp(a, b);
    printf("\nAfter: a = %d, b = %d", a, b);
}
