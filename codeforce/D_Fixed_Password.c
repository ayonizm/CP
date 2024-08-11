#include<stdio.h>
int main()
{
    int x;
   for (int i = 0; ; i++)
   {
    scanf("%d",&x);
    if (x!=1999)
    {
        printf("Wrong\n");
    }
    else{
        printf("Correct\n");
        break;
    }
    
   }
   
   return 0;
}