#include <stdio.h>

/* 
 do{
     noi dung can lap
 } while(dieu_kien_lap);
 */

int main()
{

    int a = 5;

    do
    {
        printf("Value: %d\n", a);
        a = a + 1;
    } while (a < 50);

    return 0;
}