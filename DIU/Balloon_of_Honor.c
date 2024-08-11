#include<stdio.h>
#include<math.h>
int main ()
{
    double r;
    scanf("%lf",&r);
    int liter;
    scanf("%d",&liter);
   double pi = 3.1416;
   double v = (4.00/3.00)*pi*pow(r,3.00);
   int x = v;
   int l = liter/x;
   printf("%d\n",l);
   return 0;
}