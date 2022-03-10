#include <stdio.h>
#include <stdlib.h>

int check()
{
    long n, s, t, hs, op; // s: t?ng, t: trung gian trong qua trinh tinh toan

option:
    printf("\n\nChoose one of the following options: \n");
    printf("1 - Enter ISBN number\n");
    printf("0 - Exit\n");
    printf("Your selection (0 -> 1): ");
    scanf("%ld", &op);
    if (op == 0)
        goto end;
    else if (op == 1)
        goto check;
    else
    {
        printf("Invalid choice. Try again.**\n");
        goto option;
    }

check:
    printf("\n=====ISBN Validator=====\n");

    printf("ISBN(0 to quit): ");
    scanf("%ld", &n);

    if (n == 0)
    {
        printf("Hava a nice day!");
        return 0;
    }
    s = 0;
    hs = 1;
    while (n != 0)
    {
        t = n % 10;
        s += t * hs;
        hs++;
        n /= 10;
    }
    if (s % 11 == 0)
        printf("This is a vaild ISBN.\n");
    else
        printf("This is not a vaild ISBN.\n");
    system("pause");
    goto option;

end:
    return 0;
}

int main()
{
    check();
}
