#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void add(int a[], int &n, int k, int l)
{
    for (int i = n - 1; i >= k; i--) // i--: d?ch t? v? trí n-1, r?i d?ch ti?p v? trí tru?c dó... d?n d?n VTCanChen
    {
        a[i + 1] = a[i];
    }
    a[k] = l; // Gán s? c?n chèn vào v? trí c?n chèn.
    n++;      // Xong khi chèn xong thì s? lu?ng phàn t? tang lên.
}

int search(int *a, int n, int x) // x: bien can tim
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x) // neu phan tu tai vi tri i = vi tri x
            count++;   // tang bien count.
    }
    return count;
}

void maxMin(int *a, int n, int minVal, int maxVal)
{
    int i;
    printf("Enter min and max: ");
    scanf("%d %d", &minVal, &maxVal);
    for (i = 0; i < n; i++)
    {
        if (a[i] >= minVal && a[i] <= maxVal)
        {
            printf("%d\t", a[i]);
        }
    }
}

void temp(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void increase(int *a, int n)
{
    for (int i = 0; i < n < 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
                temp(a[i], a[j]);
        }
    }
}

int main()
{
    int a[100], n;
    char gt;
    do
    {
        printf("\n============MENU===========");
        printf("\n1 - Add a value");
        printf("\n2 - Search a value");
        printf("\n3 - Print out the array");
        printf("\n4 - Print out values in a range");
        printf("\n5 - Print out the array in ascending order");
        printf("\nEnter gt: ");
        scanf(" %d", &gt);

        if (gt == 1)
        {
            int k, l;
            do
            {
                printf("Enter elements: ");
                scanf("%d", &n);
            } while (n <= 0 || n > 50);
            input(a, &n);

            do
            {
                printf("\nPosition you wanna add(0 <= k < n): ");
                scanf("%d", &k);
            } while (k < 0 || k > n);
            printf("Enter the number you wanna add: ");
            scanf("%d", &l);
            printf("The array after adding a value: ");
            add(a, n, k, l);
            output(a, n);
        }
        else if (gt == 2)
        {
            input(a, &n);

            printf("\n----\n");
            int x;
            printf("Enter the value you search: ");
            scanf("%d", &x);
            int soLuongXuatHien = search(a, n, x);
            printf("So luong xuat hien cua x trong mang: %d\n", soLuongXuatHien);
        }
        else if (gt == 3)
        {
            input(a, &n);
            output(a, n);
        }
        else if (gt == 4)
        {
            int minVal, maxVal;
            input(a, &n);
            maxMin(a, n, minVal, maxVal);
        }
        else if (gt == 5)
        {
        }
    } while (gt != 'x');
}
