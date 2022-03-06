#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int d;
    int m;
    int y;
};

int main()
{
    FILE *f;
    f = fopen("C:\\Users\\meoca\\Desktop\\Never give up.bin", "wb"); // wb: ghi file dưới dạng nhị phân
    if (f == NULL)
    {
        printf("Error!!");
        exit(1);
    }
    Date n;
    n.d = 8;
    n.m = 2;
    n.y = 2002;

    fwrite(&n, sizeof(struct Date), 1, f);
    fclose(f);
}