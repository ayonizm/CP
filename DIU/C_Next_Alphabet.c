// 97-122
#include<stdio.h>
int main()
{
   char name ;
   scanf("%c",&name);
   int x = name;
   if (x == 122)
   {
    printf("a");
   }
   else{
    printf("%c",x+1);
   }
   
return 0;
}