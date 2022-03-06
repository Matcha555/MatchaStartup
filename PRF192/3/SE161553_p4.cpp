#include <stdio.h>
int main()
{
    int x, giaithua;

    do
    {
        printf("\nNhap vao x (x>=0): ");
        scanf("%d", &x);
    } while (x < 0);

    giaithua = 1;
    for (int i = 1; i <= x; i++)
    {
        giaithua = giaithua * i;
    }
    printf("Giai thua = %d", giaithua);
}
