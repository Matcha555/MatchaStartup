#include <stdio.h>
#include <stdlib.h>

void Import(int a[], int &n)
{
    int i;
    do
    {
        printf("\nEnter n: ");
        scanf("%d", &n);
    } while (n <= 0);
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void Export(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\na[%d] = %d", i, a[i]);
    }
}

void xuatFile(int a[], int n, char name[50])
{
    FILE *f;
    f = fopen(name, "w");
    if (f == NULL)
    {
        printf("\bError!!!");
        return;
    }
    int i;
    fprintf(f, "%d\n", n);
    for (i = 0; i < n; i++)
    {
        fprintf(f, "%d\n", a[i]);
    }
    fclose(f);
}

int main()
{
    int x[50], n;
    Import(x, n);
    xuatFile(x, n, "C:\\Users\\meoca\\Desktop\\array.out");
    Export(x, n);
}