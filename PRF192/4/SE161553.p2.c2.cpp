#include <stdio.h>
#include <math.h>

void Import(long long &n)
{
    do
    {
        printf("Press n: ");
        scanf("%lld", &n);
    } while (n < 0);
}

int Fibo(int n)
{
    if (n == 0 || n == 1)
        return 1;
    long long f0 = 0, f1 = 1;
    for (int i = 3; i <= 93; i++)
    {
        long long fn = f0 + f1;
        if (fn == n)
            return 1;
        f0 = f1;
        f1 = fn;
    }
    return 0;
}

void Import1(int &day, int &month, int &year)
{
    printf("Press day: ");
    scanf("%d", &day);
    printf("Press month: ");
    scanf("%d", &month);
    printf("Press year: ");
    scanf("%d", &year);
}

int Date(int day, int month, int year)
{
    if (day < 0 || month < 0 || year < 0)
        return 0;
    if (month > 12)
        return 0;
    if (month == 2)
    {
        if (day > 28)
            return 0;
    }

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if (month > 31)
            return 0;
    }
    if (day > 30)
        return 0;
    return 1;
}

void Export1(int day, int month, int year)
{
    printf("Today is %d/%d/%d", day, month, year);
}

int main()
{
    char gt;
    do
    {
        printf("\n------------MENU------------\n");
        printf("1 - Fibonacci.\n");
        printf("2 - Date.\n");
        printf("x - Exit the program!\n");
        printf("You choose: ");
        scanf(" %c", &gt);

        if (gt == '1')
        {
            int t;
            printf("Enter the number of numbers: ");
            scanf("%d", &t);
            while (t--)
            {
                long long a;
                Import(a);
                if (Fibo(a))
                    printf("YES\n");
                else
                    printf("NO\n");
            }
        }
        else if (gt == '2')
        {
            int day, month, year;
            Import1(day, month, year);
            Export1(day, month, year);
            printf("\nYou type: %s", Date(day, month, year) == 1 ? "Correct" : "Incorrect");
        }
    } while (gt != 'x');
}
