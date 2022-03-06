#include <stdio.h>

void Import(int &day, int &month, int &year)
{
    printf("Press day: ");
    scanf("%d", &day);
    printf("Press month: ");
    scanf("%d", &month);
    printf("Press year: ");
    scanf("%d", &year);
}

int Check(int day, int month, int year)
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
        if (d <= 31)
            return 1;
    }
    if (day > 30)
        return 0;
    return 1;
}

void Export(int day, int month, int year)
{
    printf("Today is %d/%d/%d", day, month, year);
}

int main()
{
    int day, month, year;
    Import(day, month, year);
    Export(day, month, year);
    printf("\nYou type: %s", Check(day, month, year) == 1 ? "Correct" : "Incorrect");
}
