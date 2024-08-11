#include<stdio.h>
void fun(){
    printf("Hello\n");
    fun();
    // stack overflow
}
int main()
{
   fun();
   return 0;
}