#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int ar[n];

   for (int i = 0; i < n; i++)
   {
    scanf("%d",&ar[i]);
   }
   int number;
   scanf("%d",&number);
   int found=0;;
   for (int i = 0; i < n; i++)
   {
    if (ar[i]==number)
    {
        printf("%d",i);
        found++;

        break;
    }
    
   
    
   }
   if (found!=1)
   {
    printf("-1");
   }
   
   
   
return 0;
}