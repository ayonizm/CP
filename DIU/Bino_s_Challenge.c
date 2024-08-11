#include<stdio.h>
int main ()
{
   int x;
   scanf("%d",&x);
   int ar[x];
   for (int i = 0; i < x; i++)
   {
    scanf("%d",&ar[i]);
   }
   int two = 0;
   int three = 0;
   int four = 0;
   int five = 0;
   for (int i = 0; i < x; i++)
   {
    if (ar[i]%2==0)
    {
        two++;
    }
     if (ar[i]%3==0)
    {
        three++;
    }
    if (ar[i]%4==0)
    {
        four++;
    }
    if (ar[i]%5==0)
    {
        five++;
    } 
   }
   printf("%d Multiplo(s) de 2\n",two);
   printf("%d Multiplo(s) de 3\n",three);
   printf("%d Multiplo(s) de 4\n",four);
   printf("%d Multiplo(s) de 5\n",five);
   return 0;
}