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
    f = fopen("C:\\Users\\meoca\\Desktop\\Never give up.bin", "rb");
    if (f == NULL)
    {
        printf("Error!!");
        exit(1);
    }
    Date n;
    fread(&n, sizeof(struct Date), 1, f);

    printf("Date: %d/%d/%d", n.d, n.m, n.y);

    fclose(f);
}