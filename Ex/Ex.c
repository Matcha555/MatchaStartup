#include <stdio.h>
#include <math.h>

// a*ax + bx + c = 0
int main()
{
    float a, b, c, x, y;
    printf("Press a and b: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0) {
        if (b == 0 && c == 0) {
            printf("\nA lot of values.");
        }
        else if (b == 0 && c != 0) {
            printf("\nNo value.");
        }
        else {
            x = - c / b;
            printf("\nOne value x = %0.2f", x);
        }
    }

    if (a != 0) {

        y = b * b - 4 * a * c;
        if (y < 0) {
            printf("\nNo value.");
        }
        else if(y == 0) {
            printf("Value x = %0.2f", - b / (2 * a));
        }
        else {
            printf("Value x = %0.2f", (- b + sqrt(y) / (2 * a)));
            printf("\nValue x = %0.2f", (- b - sqrt(y) / (2 * a)));
        }
    }

    return 0;
}


