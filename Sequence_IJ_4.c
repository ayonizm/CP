#include<stdio.h>
int main ()
{
    float j = 1.00;
    float i = 0.0;
   while (i<=2.00)
   {
    
    for (; j <= 3; j++)
    {
        printf("I=%.1f J=%.1f\n",i,j);
    }
    i = i+.2;
    j = j + i;
   }
   
    
   
   
   return 0;
}