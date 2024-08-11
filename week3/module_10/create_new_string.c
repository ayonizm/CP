#include<stdio.h>
#include<string.h>
int main()
{
   char x[1001];
   char y[1001];
   scanf("%s %s",&x,&y);
   int x1 = strlen(x);
   int y1 = strlen(y);
   printf("%d %d\n",x1,y1);
   printf("%s %s",x,y);


   return 0;
}