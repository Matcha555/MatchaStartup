#include <stdio.h>

int main()
{
   int i, j, count = 0;
   // i = 100, j = 200;

   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         printf("%5d", count++);
      }
      printf("\n\n");
   }

   return 0;
}