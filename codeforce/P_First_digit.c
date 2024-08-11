#include<stdio.h>
int main()
{
   int x;
   scanf("%d",&x);
  int div1 = x/10;
  int div2 = div1/10;
  int div3 = div2/10;
  if (div3%2==0)
  {
   printf("even");
  }
  else{
   printf("odd");
  }
   return 0;
}