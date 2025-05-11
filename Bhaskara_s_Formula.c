#include<stdio.h>
#include<math.h>
int main ()
{
   double a,b,c;
   scanf("%lf %lf %lf",&a,&b,&c);
   double x1 = pow(b,2.0) - (4.0 * a * c);
   double y = 2.00 * a ;
   double z = b;
   double x = sqrt(x1);
   if (x1>=0 && y!=0)
   {
    double ans1 = (-z + x)/y;
    double ans2 = (z + x)/y;
    printf("R1 = %.5lf\n",ans1);
    printf("R2 = %.5lf\n",ans2*-1);
   }
   else{
    printf("Impossivel calcular\n");
   }
   

   return 0;
}