#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
   char a[101];
   for (int i = 0; i < n; i++)
   {
    scanf("%s",&a);
    int len = strlen(a);
    if (len>10)
    {
        printf("%c",a[0]);
        printf("%d",len-2);
        printf("%c",a[len-1]);
    }
    else if (len<=10)
    {
        printf("%s",a);
    }
    
    printf("\n");
   }
   
   return 0;
}