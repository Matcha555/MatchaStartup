#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Random method
int random(int a, int b)
{
    return (a + rand() % (b - a + 1));
}

main()
{
    int total, x, y, count = 0, k;
    printf("\t\tDice Thrower");
    printf("\n====================\n");
    do
    {
        printf("Total sought: ");
        fflush(stdin);
        scanf("%d", &total);
        if (total < 2 || total > 12)
            printf("Range [2...12] only!!!\n");
    } while (total < 2 || total > 12);
    do
    {
        x = random(1, 6);
        y = random(1, 6);
        printf("Result of throw %d: %d + %d\n", ++count, x, y);
    } while (x + y != total);
    printf("You got your total in %d throws!", count);
}

