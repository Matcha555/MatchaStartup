#include <stdio.h>
#include <math.h>
#include <conio.h>

void check(int &x, int &k, int &min, int &max)
{
    min = 9, max = 0; // k: luu tru gia tri tach ra
    while (x > 0)
    {
        k = x % 10;
        if (k < min)
            min = k;
        if (k > max)
            max = k;
        x = x / 10; // Chia lay nguyen de tiep tuc lay chu so tiep theo
    }
}

int main()
{
    int x, k, min, max;
    do
    {
        printf("Press x: ");
        scanf("%d", &x);
    } while (x < 0);
    check(x, k, min, max);
    printf("Min and Max: %d & %d", min, max);
}
