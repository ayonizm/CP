#include<stdio.h>
int main()
{
   double a,b,c;
   scanf("%lf %lf %lf",&a,&b,&c);
   double x = (a*2)+(b*3)+(c*5);
   double y = 2 + 3 + 5;
   printf("MEDIA = %.1lf\n",x/y);
   return 0;
}