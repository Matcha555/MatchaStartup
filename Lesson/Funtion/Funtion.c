#include <stdio.h>

int max(int so1, int so2);

int main()
{
    /* phan dinh nghia bien cuc bo  */
    int a = 667;
    int b = 7028;
    int r;

    /* goi ham de tim gia tri lon nhat */
    r = max(a, b);

    printf("Gia tri lon nhat la : %d\n", r);
    printf("\n===========================\n");
    printf("VietJack chuc cac ban hoc tot! \n");

    return 0;
}

/* phan dinh nghia ham de tra ve gia tri lon nhat giua hai so */
int max(int so1, int so2)
{
    /* khai bao bien cuc bo */
    int result;

    if (so1 > so2)
        result = so1;
    else
        result = so2;

    return result;
}