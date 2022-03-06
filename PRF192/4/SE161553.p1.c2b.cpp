#include <stdio.h>

main()
{
    int n = 260;
    int *p = &n;   //Assign pointer p equals to address memory n
    printf("n=%d\n", n);
    char *pp = (char *)p;  //
    *pp = 0;
    printf("n=%d\n", n);
}

