#include<stdio.h>
void hello(int a){
    int count = 1;
    for (int i = 1; i <a ; i++)
    {
        printf("%d ",i);
        count++;
    }
    printf("%d",count);
    
}
int main()
{
   int x;
   scanf("%d",&x);
   hello(x);
   return 0;
}