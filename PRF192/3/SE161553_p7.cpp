#include <stdio.h>

int sum(int n)
{
    int s = 0;
    do
    {
        int t = n % 10;
        n = n / 10;
        s += t;
    } while (n > 0);
    return s;
}

int main()
{
    int n;
    do
    {
        printf("Press n:");
        scanf("%d", &n);
        printf("\n=>Result: %d\n", sum(n));
    } while (n >= 0);
}

