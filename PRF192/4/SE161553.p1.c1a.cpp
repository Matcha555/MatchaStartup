#include <stdio.h>

int main()
{
    int n = 7, m = 6;
    int *pn = &n; // Assign pointer pn equals to address memory n
    int *pm = &m; // Assign pointer pm equals to address memory m
    // Value at address n = value at address m  + (2*m) - (3*n) -> *pn = 6 + (2 * 6) + (3 * 7);
    *pn = *pm + (2 * m) - (3 * n);
    *pm -= *pn;          // *pm = *pm - *pn -> m = 6 - (-3)
    printf("%d", m + n); // Output 9 + (-3) = 6
}

