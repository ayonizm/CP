#include<stdio.h>
void hello(char x){
    printf("%c",x+32);
}
int main()
{
   int x;
   scanf("%c",&x);
   hello(x);
   return 0;
}