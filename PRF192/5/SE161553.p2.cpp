#include <stdio.h>
#include <stdlib.h>

int random(int a, int b)
{
    return (a + rand() % (b - a + 1));
}

int main()
{
    int total, x, y, count = 0;
    printf("\t\tBall Lottery");
    printf("\n==================\n");
    do
    {
        printf("Total sought: ");
        fflush(stdin);
        scanf("%d", &total);
        if (total < 2 || total > 20)
            printf("Range [2...20] only!!!\n");
    } while (total < 2 || total > 20);
    do
    {
        x = random(1, 10);
        y = random(1, 10);
        printf("Result of picks %d and %d: %d + %d\n", count++, count, x, y);
    } while (x + y != total);
    printf("\nYou got your total in %d picks!", count);
}
