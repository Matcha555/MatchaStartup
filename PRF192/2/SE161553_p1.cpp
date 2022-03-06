#include <stdio.h>
 
int main()
{
    int a, b;
    char Calculate;
    printf("\nPress your choice: ");
    scanf("%c", &Calculate);
 
    printf("\nPress a and b: ");
    scanf("%d%d", &a, &b);
 
    switch (Calculate)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;
    case '/':
        if(b == 0){
            printf("Khong the chia cho 0!");
        }else{
            printf("%d / %d = %.2f", a, b, (float)a / b);
        }
        break;
 
    default:
    printf("No math %c!", Calculate);
        break;
    }
}
