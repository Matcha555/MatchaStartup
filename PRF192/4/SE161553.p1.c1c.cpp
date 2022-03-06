#include <stdio.h>

int main()
{
    double x = 3.2, y = 5.1;
    double *p1 = &x;      // Assign pointer p1 equals to address memory x
    double *p2 = &y;      // Assign pointer p2 equals to address memory y
    *p1 += 3 - 2 * (*p2); // x=x+3-2*y=-4
    *p2 -= 3 * (*p1);     // y=y-(3*x)=17.1
    printf("%lf", x + y); // Output 17.1+(-4)=13.1
}
