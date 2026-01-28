#include<stdio.h>
int sum(int ar[],int n,int i){
    if (i==n)
    {
        return 0;
    }
    int l = ar[i] + sum(ar,n,i+1);
    return l;

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
   int l = sum(ar,n,i);
   if (l>0)
   {
    printf("%d",l);
   }
   else{
    printf("%d",l*-1);
   }
   
   
   return 0;
}