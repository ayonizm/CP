#include<stdio.h>
void hello(int ar[],int n,int i){
    if (i==n)
    {
        return;
    }
    
     hello(ar,n,i+1);
    if (i%2==0)
    {
        printf("%d ",ar[i]);
    }
    
    
}
int main()
{
   int n;
   scanf("%d",&n);
   int ar[n];
   for (int i = 0; i < n; i++)
   {
    scanf("%d",&ar[i]);
   }
   int i = 0;
   hello(ar,n,i);
   return 0;
}