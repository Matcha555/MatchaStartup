#include <stdio.h>

// Dãy Fibonacci là dãy vô hạn các số tự nhiên bắt đầu bằng 1 và 1, sau đó các số tiếp theo sẽ bằng tổng của 2 số liền trước nó.
// VD: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610...
/* F(0) = 0
   F(1) = 1
   F(n) = F(n - 1) + F(n - 2)
   */

int Fibonacci(int x)
{
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    else
        return Fibonacci(x - 1) + Fibonacci(x - 2);
}

int main()
{
    int n;

    do
    {
        printf("nhap n: ");
        scanf("%d", &n);
    } while (n < 0);

    printf("Fibonacci(%d) = %d", n, Fibonacci(n));
}