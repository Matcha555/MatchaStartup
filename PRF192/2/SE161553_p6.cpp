#include <stdio.h>
int main()
{

    for (int a = 0; a < 256; a++)
    {
        printf("%d\t%c\t%o\t%X\n", a, a, a, a);
        if (a != 0 && a % 20 == 0) // Xuat 20 dòng roi nhap tiep phím bat ki de tiep tuc.
            getchar();
    }
}
