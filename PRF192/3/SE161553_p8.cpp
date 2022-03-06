#include <stdio.h>

double d(int integer, int fraction)
{
    double num = fraction;
    while (num >= 1)
    {
        num = num / 10;
    }
    if (integer < 0)
    {
        return integer - num;
    }
    return integer + num;
}

int main()
{
    int integer;
    int fraction;
    printf("\nInteger number: ");
    scanf("%d", &integer);
    do
    {
        printf("Fraction number: ");
        scanf("%d", &fraction);
    } while (fraction < 0);
    printf("=>Result: %lf", d(integer, fraction));
}

