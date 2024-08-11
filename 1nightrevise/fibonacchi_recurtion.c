#include<stdio.h>
int fib(int x){
    int f ;
    f = x + fib(x-1);
    return f;
}
int main()
{
   printf("%d",fib(5));
   return 0;
}