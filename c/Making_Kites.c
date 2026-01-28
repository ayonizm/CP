#include<stdio.h>
int main ()
{
   int n;
   scanf("%d",&n);
   for (int i = 0; i < n; i++)
   {
    double x,y;
    scanf("%lf %lf",&x,&y);
    double num1 = (x/2.00) * y;
    int num2 = num1;
    printf("%d cm2\n",num2);
   }
   
   return 0;
}