#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    //printf("Rand-Max = %d", RAND_MAX);
    srand(time(NULL));
    int i;
    for (i = 0; i < 20; i++)
    {
        int random = rand() % 6;
        printf("%5d", random);
    }

    return 0;
}