#include<stdio.h>
#include<math.h>
int main()
{
   double x1,y1,x2,y2;
   scanf("%lf %lf",&x1,&y1);
   scanf("%lf %lf",&x2,&y2);
   double x,y;
   x = (x1-x2)*(x1-x2);
   y = (y1-y2)*(y1-y2);
   double z = x + y;
   double z1 = sqrt(z);
   printf("%.4lf\n",z1);

   return 0;
}