#include <stdio.h>
#include <stdlib.h>

/*
1. Create
2. Open
3. Write
4. Close
*/

int main()
{
    // 1
    FILE *f;

    // 2
    f = fopen("C:\\Users\\meoca\\Desktop\\mickey.txt", "w"); // w: ghi file dưới dạng text.
    if (f == NULL)
    {
        printf("\nError!!!");
        exit(1); //= return 1
    }

    // 3
    char a[50];
    printf("Enter sentence: ");
    fgets(a, sizeof(a), stdin);
    fprintf(f, "%s", a);

    // 4
    fclose(f);
}