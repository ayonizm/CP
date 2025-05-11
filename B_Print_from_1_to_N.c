#include<stdio.h>
void fun(int i,int j){
    
    printf("%d\n",i);
    if (i==j)
    {
        return;
    }
    
    fun(i+1,j);
}
int main()
{
    int x=1;
    int j;
    scanf("%d",&j);
    fun(x,j);
   
   return 0;
}