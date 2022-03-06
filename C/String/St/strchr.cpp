#include <stdio.h>
#include <string.h>

char *Find(char a[], char k) // Ký tự cần tìm
{
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == k)
            return &a[i]; // trả về con trỏ  a[i].
    }
}

int main()
{
    char a[50] = "Doan Trieu Dieu Anh";
    char *b;
    // b = strchr(a, 'e');
    b = Find(a, 'e');
    printf("a: %s", a);
    printf("\nb:%s", b);
}