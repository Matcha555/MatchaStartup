#include <stdio.h>

int main()
{
    char a, b;
    int d, c;
    printf("Press a and b: ");
    scanf("%c %c", &a, &b);
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    d = b - a;
    printf("\n-------ASCII-------\n");
    printf("D: %d\n\n", d);
    printf("\nChar\tDec\tOct\tHex\n");
    for (c = a; c <= b; c++)
    {
        printf("%c\t%d\t%o\t%X\n", c, c, c, c);
    }
}
