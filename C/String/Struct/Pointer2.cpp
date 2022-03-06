#include <stdio.h>
#include <math.h>

struct Fraction
{
    int numerator, denominator;
};

void Import(Fraction *fr)
{
    printf("Print a numerator: ");
    scanf("%d", &fr->numerator);
    do
    {
        printf("Print a denominator: ");
        scanf("%d", &fr->denominator);
    } while (fr->denominator == 0);
}

int UCLN(int a, int b)
{
    a = abs(a); // Chuyển số a thành số dương
    b = abs(b); // Chuyển số b thành số dương
    int USCLN = 1;
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// Convert to the fraction to the lowest terms
struct Fraction lowest(struct Fraction fr)
{
    if (fr.denominator != 0)
    {
        int u = UCLN(fr.numerator, fr.denominator);
        fr.numerator /= u;
        fr.denominator /= u;
    }
    return fr;
}

void Export(Fraction fr)
{
    printf("Numerator: %d", fr.numerator);
    printf("\nDenominator: %d", fr.denominator);
    printf("\n%d/%d", fr.numerator, fr.denominator);
}

int main()
{
    Fraction fr1;
    Import(&fr1);
    printf("----\n");
    Export(fr1);
    printf("\n------\n");
    fr1 = lowest(fr1);
    printf("%d/%d\n", fr1.numerator, fr1.denominator);
}