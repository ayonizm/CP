#include <stdio.h>
int main()
{
   int n;
   int k = 1;
   scanf("%d", &n);
   int l = n - 1;
   for (int i = 0; i < n; i++)
   {
      for (int i = l; i > 0; i--)
      {
         printf(" ");
      }
      for (int i = 0; i < k; i++)
      {

         printf("*");
      }

      printf("\n");
      l--;
      k = k + 2;
   }
   int k1 = 0;
   int nida = (n * 2) - 1;
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < k1; j++)
      {
         printf(" ");
      }
      for (int j = 0; j < nida; j++)
      {

         printf("*");
      }

      k1++;
      nida = nida - 2;
      printf("\n");
   }

   return 0;
}