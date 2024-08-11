#include<stdio.h>
int main()
{
    int a;
   while (scanf("%d",&a)!=EOF)
   {
    if (a==1990)
    {
        printf("corect\n");
        break;
    }
    else{
        printf("wrong\n");
    }
   }
   
return 0;
}