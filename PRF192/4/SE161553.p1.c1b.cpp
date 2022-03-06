#include <stdio.h>

int main()
{
    char c1 = 'A', c2 = 'F';
    char *p1 = &c1;        // Assign pointer p1 equals to address memeory c1
    char *p2 = &c2;        // Assign pointer p2 equals to address memeory c2
    *p1 += 3;              // c1 = c1 + 3 = 65 + 3 = 68
    *p2 -= 5;              // c2 = c2 - 5 = 70 - 5 = 65
    printf("%d", c1 - c2); // Output 68 - 65 = 3
}

