#include<stdio.h>
#include<string.h>
int main()
{
   char name[100];
//    gets(name);
   fgets(name,100,stdin);
   printf("%s",name);
return 0;
}