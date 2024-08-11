#include<stdio.h>
int hello(){
    int x,y;
    scanf("%d %d",&x,&y);
    int z = x + y;
    return z;
}
int main()
{
   int sum = hello();
   printf("%d",sum);
   return 0;
}