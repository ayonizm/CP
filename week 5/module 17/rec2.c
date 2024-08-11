#include<stdio.h>
void fun(int c){
    if (c<=0)
    {
        return 0;
    }
    
    printf("Hello\n");
    fun(c-1);
    
}
int main()
{
   fun(9);
   return 0;
}