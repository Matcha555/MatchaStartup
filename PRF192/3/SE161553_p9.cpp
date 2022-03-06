#include <stdio.h>
#include <math.h>

int UCLN(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int BCNN(int a, int b)
{
    return a / UCLN(a, b) * b;
}

int main()
{
    int a, b;
    printf("Press a and b: ");
    scanf("%d%d", &a, &b);

    printf("UCLN and BCNN: %d and %d", UCLN(a, b), BCNN(a, b));
}
