#include <stdio.h>

// Liệt kê các số chẵn và số lẻ nhỏ hơn n
int main()
{

    int i, a;
    printf("Press a number: \n");
    scanf("%d", &a);

    for (i = 0; i < a; i++)
    {
        if (i % 2 == 0)
        {
            printf("These are even numbers: %d\n", i);
        }

        if (i % 2 == 1)
        {
            printf("These are odd numbers: %d\n", i);
        }
    }

    printf("\nWelcome to Matcha company");

    return 0;
}
