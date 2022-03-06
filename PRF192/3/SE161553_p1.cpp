#include <stdio.h>
#include <math.h>

int Number(int n)
{

    if (n < 2)
    {
        return 0;
    }

    int i;
    int Check = (int)sqrt(n);
    for (i = 2; i <= Check; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int i, n;
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("=> %d: \n", n);
    if (n >= 2)
    {
        printf("%d ", 2);
    }
    for (i = 3; i < n; i += 2)
    {
        if (Number(i) == 1)
        {
            printf("%d ", i);
        }
    }
}
