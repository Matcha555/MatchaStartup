#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    f = fopen("C:\\Users\\meoca\\Desktop\\mickey.txt", "r");
    if (f == NULL)
    {
        printf("\nError!!!");
        exit(1); //= return 1
    }
    char a[50];
    fscanf(f, "%[^\n]", &a);
    printf("A sentence: %s", a);
    fclose(f);
}