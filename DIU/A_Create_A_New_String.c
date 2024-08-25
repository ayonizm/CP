#include<stdio.h>
#include<string.h>
int main()
{
   char name1[1001];
   char name2[1001];
   scanf("%s",name1);
   scanf("%s",name2);
   int x=strlen(name1);
   int y=strlen(name2);
   printf("%d %d\n",x,y);

   printf("%s ",name1);
   printf("%s\n",name2);



return 0;
}