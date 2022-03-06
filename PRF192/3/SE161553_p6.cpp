#include <stdio.h>

int Check(long long n)
{
    if (n == 0 || n == 1)
        return 1;
    long long fn2 = 0, fn1 = 1;
    for (int i = 3; i <= 93; i++)
    {
        long long fn = fn1 + fn2;
        if (fn == n)
            return 1;
        fn2 = fn1;
        fn1 = fn;
    }
    return 0;
}

int main()
{
    int a;
    printf("Press a: ");
    scanf("%d", &a);
    while (a--)
    {
        long long n;
        scanf("%lld", &n);
        if (Check(n))
            printf("YES\n");
        else
            printf("NO\n");
    }
}
