#include <stdio.h>

int a[50], n;

void input(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void output(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\na[%d] = %d", i, a[i]);
    }
}

void output2(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", i, a[i]);
    }
}

void increase(int a[], int &n)
{
    int i = 0;
    int temp;
    for (; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int sum(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            continue;
        }
        s += a[i];
    }
    return s;
}

int checkPrime(int n)
{
    if (n < 2)
        return 0;
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
                return 0;
        }
        return 1;
    }
}

void prime(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (checkPrime(a[i]))
            printf("%3d", a[i]);
    }
}

void pos(int a[], int &n, int k)
{
    for (int i = k; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

void del(int a[], int &n)
{

    int i = 0;
    while (i < n)
    {
        int j = i + 1;
        bool flag = false;
        while (j < n)
        {
            if (a[i] == a[j])
            {
                pos(a, n, j);
                flag = true;
            }
            else
            {
                j++;
            }
        }
        if (flag == true)
        {
            pos(a, n, i);
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int a[50], n;
    do
    {
        printf("Enter 10 integers: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 50);

    printf("\n------\n");
    input(a, n);
    printf("\nArray: ");
    output(a, n);
    increase(a, n);

    printf("\n\n- Array after increasing: ");
    output(a, n);

    printf("\n- Prime numbers: ");
    prime(a, n);

    printf("\n- Sum of even numbers: %d", sum(a, n));

    printf("\n- Array elements after deletion of the duplicate elements: ");
    del(a, n);
    output2(a, n);
}
