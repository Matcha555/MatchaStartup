#include <stdio.h>
#include <math.h>

void qe(float &a, float &b, float &c)
{
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);
    printf("a = %.2f,b = %.2f,c = %.2f", a, b, c);

    float delta, x, x1, x2;
    if (a == 0)
    {
        if (b == 0 && c != 0)
        {
            printf("Impossible equation.\n");
        }
        else if (b == 0 && c == 0)
        {
            printf("The equation has infinitely many solutions.\n");
        }
        else
        {
            x = -c / b;
            printf("\nSolution of an equation: %.2f", x);
        }
    }
    else
    {
        delta = (b * b) - (4 * a * c);
        if (delta < 0)
            printf("\nImpossible equation.\n");
        else if (delta == 0)
        {
            x1 = -b / (2 * a);
            printf("Double root: %.2f", x1);
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("\nx1 = %.2f", x1);
            printf("\nx2 = %.2f", x2);
        }
    }
}

void bank()
{
    float despoit, rate, amount;
    int years;
    do
    {
        printf("Enter despoit: ");
        scanf("%f", &despoit);
    } while (despoit <= 0);
    do
    {
        printf("\nEnter rate: ");
        scanf("%f", &rate);
    } while (rate <= 0 || rate > 1);
    do
    {
        printf("\nEnter years: ");
        scanf("%d", &years);
    } while (years <= 0);
    printf("\nd = %f, r = %f, y = %d", despoit, rate, years);

    amount = despoit * pow(1 + rate, years);
    printf("\nAmount at the %d years: %f", years, amount);
}

int main()
{
    char gt;
    do
    {
        printf("\n\n\t\t=========MENU=========");
        printf("\n1 - Quadratic equation!");
        printf("\n2 - Bank deposit problem!");
        printf("\nx - Quit the program!");
        printf("\nYou choose: ");
        scanf(" %c", &gt);

        if (gt == '1')
        {
            float a, b, c;
            qe(a, b, c);
        }
        else if (gt == '2')
        {
            bank();
        }
    } while (gt != 'x');
}
