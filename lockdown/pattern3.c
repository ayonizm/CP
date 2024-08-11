#include <stdio.h>
int main()
{
   int x;
   scanf("%d", &x);
   int su = (x / 2) ;
   int k = 1;
   for (int i = 0; i < x / 2; i++)
   {
      for (int i = su; i > 0; i--)
      {
         printf(" ");
      }
      for (int i = 0; i < k; i++)
      {
         printf("*");
      }

      su--;
      k= k +2;
      printf("\n");
   }
   for (int i = 0; i < x; i++)
   {
      printf("*");
   }
   printf("\n");
   int o = 1;
   int y = x-2;
   for (int i = 0; i < x/2; i++)
   {
      for (int i = 0; i < o; i++)
      {
         printf(" ");
      }
      for (int i = y; i >0; i--)
      {
         printf("*");
      }
      y = y-2;
      printf("\n");
      o++;
   }
   

   return 0;
}