#include <stdio.h>
#include <math.h>

void Import(int &n)
{
    do
    {
        printf("Print n: ");
        scanf("%d", &n);
    } while (n < 0);
}

void Prime(int n)
{
    if (n < 2)
        printf("%d is is not a prime.", n);
    else
    {
        int i;
        int mark = 1;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0) // i la boi cua n
            {
                mark = 0;
                break;
            }
        }
        if (mark == 1)
            printf("%d is a prime.\n", n);
        else
            printf("%d is is not a prime", n);
    }
}

void Find(int n)
{
    int temp, min = 9, max = 0;
    while (n > 0)
    {
        temp = n % 10;
        if (temp > max)
            max = temp;
        if (temp < min)
            min = temp;
        n /= 10;
    }
    printf("Max and min: %d & %d", max, min);
}

int main()
{
    char gt;
    do
    {
        printf("\n---------------MENU---------------\n");
        printf("1 - Check the prime!\n");
        printf("2 - Find max and min!\n");
        printf("x - Exit the program!");
        printf("\nYou choose: ");
        scanf(" %c", &gt);

        if (gt == '1')
        {
            int a;
            Import(a);
            Prime(a);
        }
        else if (gt == '2')
        {
            int b;
            Import(b);
            Find(b);
        }
    } while (gt != 'x');
}

