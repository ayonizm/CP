#include<stdio.h>
int main ()
{
   int n;  
   while (scanf("%d",&n)!=EOF)
   {
      if (n==0)
      {
         break;
      }
      int ar1[n];
      int ar2[n];
      int player1 = 0;
      int player2 = 0;
      for (int i = 0; i < n; i++)
      {
         scanf("%d %d",&ar1[i],&ar2[i]);
      }
      for (int i = 0; i < n; i++)
      {
         if (ar1[i]>ar2[i])
         {
            player1++;
         }
         else if (ar1[i]<ar2[i])
         {
            player2++;
         }
      }
      printf("%d %d\n",player1,player2);
   }  
   return 0;
}