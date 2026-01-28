#include<stdio.h>
#include<math.h>
int main()
{
   double r;
   scanf("%lf",&r);
   double xy = 4.0/3.0;
   double x = xy*3.14159*r*r*r;
   printf("VOLUME = %.3lf\n",x);
   return 0;
}