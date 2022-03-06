#include <stdio.h>
#include <string.h>

int main()
{

  int sum = 0, n;
    do
    {
        printf("Press n: ");
        scanf("%d", &n);

        sum += n;
    } while (n != 0);
    printf("\nSum: %d", sum);
}
