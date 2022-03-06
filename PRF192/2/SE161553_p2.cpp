#include <stdio.h>

int main()
{
    int pa = 9000000, pd = 3600000;
    int income, n, ti, tf, tax = 0;    //// ti: thu nhap chiu thue; tf: thu nhap mien thue
    printf("Your income of this year: ");
    scanf("%d", &income);
    printf("Number of dependent: ");
    scanf("%d", &n);

    tf = 12 * (pa + (n * pd));
    printf("Tax-free income: %d\n", tf);
    ti = income - tf;

    if (ti <= 0)
    {
        printf("Taxable income: 0\n");
        printf("Income tax: 0\n");
    }
    else
    {
        if (ti <= 5000000)
        {
            tax = ti * 0.05;
        }
        else if (ti <= 10000000)
        {
            tax = 5000000 * 0.05 + (ti - 5000000) * 0.1;
        }
        else if (ti <= 18000000)
        {
            tax = 5000000 * 0.05 + 5000000 * 0.1 + (ti - 1000000) * 0.15;
        }
        else
        {
            tax = 5000000 * 0.05 + 5000000 * 0.1 + 8000000 * 0.15 + (ti - 18000000) * 0.2;
        }
        printf("Taxable income: %d\n", ti);
        printf("Income tax: %d\n", tax);
    }
}
