#include <stdio.h>

void Import(int &d, int &m, int &y)
{
    printf("\nEnter day: ");
    scanf("%d", &d);
    printf("Enter month: ");
    scanf("%d", &m);
    printf("Enter year: ");
    scanf("%d", &y);
}

int date(int d, int m, int y)
{
    if (d < 0 || m < 0 || y < 0)
    {
        return 0;
    }
    if (m > 12)
    {
        return 0;
    }
    if (m == 2)
    {
        if (d > 28)
            return 0;
    }
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        if (d <= 31)
            return 1;
    }
    if (d > 30)
        return 0;
    return 1;
}

void Export(int d, int m, int y)
{
    printf("Date: %d/%d/%d", d, m, y);
}

void ascii(char x, char y)
{
    int c;
    printf("Enter 2 characters: ");
    fflush(stdin);
    scanf("%c %c", &x, &y);
    printf("x = %c,y = %c\n\n", x, y);

    if (x < y)
        x ^= y ^= x ^= y;
    for (c = x; c >= y; c--)
    {
        printf("%c: %3d %3Xh\n", c, c, c);
    }
    printf("\n");
}

int main()
{
    char gt;
    do
    {
        printf("\n\n\t\t=========MENU=========");
        printf("\n1 - Date!");
        printf("\n2 - ASCII!");
        printf("\nx - Quit the program!");
        printf("\nYou choose: ");
        scanf(" %c", &gt);

        if (gt == '1')
        {
            int a, b, c;
            Import(a, b, c);
            Export(a, b, c);
            printf("\nYou type: %s", date(a, b, c) == 1 ? "Correct" : "Incorrect");
        }
        else if (gt == '2')
        {
            char x, y;
            ascii(x, y);
        }
    } while (gt != 'x');
}
