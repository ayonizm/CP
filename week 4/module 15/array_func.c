#include<stdio.h>
void hello(int ar[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
    }
    
}
int main()
{
   int x;
   scanf("%d",&x);
   int ar[x];
   for (int i = 0; i < x; i++)
   {
    scanf("%d",&ar[i]);
   }
   hello(ar,x);
   
   return 0;
}