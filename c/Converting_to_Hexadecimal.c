#include<stdio.h>
int main ()
{
    int i = 0;
   int x,temp,rem;
   char hex[100];
   scanf("%d",&x);
   temp = x;
   while (temp!=0)
   {
    rem = temp%16;
    if (rem<10)
    {
        rem = rem + 48;
    }
    else{
        rem = rem + 55;
    }
    hex[i++]=rem;
    temp = temp/16;
   }
   for (int j = i-1; j >=0; j--)
   {
    printf("%c",hex[j]);
   }
   
   return 0;
}