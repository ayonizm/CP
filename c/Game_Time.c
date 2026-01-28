#include<stdio.h>
int main()
{
   int x,y;
   scanf("%d %d",&x,&y);
   if (x==y)
   {
    printf("O JOGO DUROU 24 HORA(S)\n");
   }
   else if (x>y)
   {
    int new = 24 -x;
    int new1 = new + y;
    printf("O JOGO DUROU %d HORA(S)\n",new1);
   }
   else if (x<y)
   {
    int new = y-x;
    printf("O JOGO DUROU %d HORA(S)\n",new);
   }
   
   
   
   return 0;
}