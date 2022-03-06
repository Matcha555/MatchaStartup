#include <stdio.h>

int main()
{
    int n = 7, m = 8;
    int *p1 = &n;            // Assign pointer p1 equals to address memory n
    int *p2 = &m;            // Assign pointer p2 equals to address memory m
    *p1 += 12 - m + (*p2);   // n = 7+12-8+8=19
    *p2 = m + n - 2 * (*p1); // m = 8+19-2*19=-11
    printf("%d", m + n);     // Output 19+(-11)=8
}

