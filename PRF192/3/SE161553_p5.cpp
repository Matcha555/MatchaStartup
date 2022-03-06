#include <stdio.h>

long Fi(int n)
{
    {
        int f1 = 1, f2 = 1, fn = 1, i;
        for (size_t i = 3; i <= n; i++)
        {
            fn = f1 + f2;
            f1 = f2;
            f2 = fn;
        }
        return fn;
    }
}

int main()
{
    int n;
    do
    {
        printf("Press n:");
        scanf("%d", &n);
        if (n <= 2)
            printf("Wrong, please type again!!!\n");
    } while (n <= 2);
    printf("%ld", Fi(n));
}
