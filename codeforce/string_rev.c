#include<stdio.h>
#include<string.h>
int main()
{
   char name[101];
   fgets(name,101,stdin);
   int x = strlen(name);
   char temp;
   for (int i = 0; i < x/2; i++)
   {
    temp = name[i];
    name[i] = name[x-i-1];
    name[x-i-1] = temp;
   }
   puts(name);
   
   return 0;
}