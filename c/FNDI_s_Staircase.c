#include<stdio.h>
#include<math.h>
int main ()
{
   double n;
   while (scanf("%lf",&n)!=EOF)
   {
    double total = 0.00;
    for (int i = 0; i < n; i++)
    {
    double h,c,l;
    scanf("%lf %lf %lf",&h,&c,&l);
    double x = sqrt((c*c)+(h*h));
    total = total + (x*l);
    }
    printf("%.4lf\n",total/10000.00);
   }
   
   return 0;
}
