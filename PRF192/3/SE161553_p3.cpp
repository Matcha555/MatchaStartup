#include <stdio.h>

int getRelPos(double x, double y, double r)
{
    double d1 = x * x + y * y;
    double r1 = r * r; /* r2*/
    if (d1 < r1)
        return 1;
    else if (d1 == r1)
        return 0;
    return -1;
}

main()
{
    double x, y, r;
    printf("Press x and y: ");
    scanf("%lf%lf", &x, &y);
    do
    {
        printf("Radius = ");
        scanf("%lf", &r);
        if (r <= 0)
            printf("Input a positive Radius!!!\n");
    } while (r <= 0);
    (getRelPos(x, y, r) == 1) ? printf("the point is in the circle") : (!(getRelPos(x, y, r)) ? printf("the point is on the circle") : printf("the point is out of the circle"));
}
