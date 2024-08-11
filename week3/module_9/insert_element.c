#include<stdio.h>
int main()
{
    int x,pos;
    scanf("%d",&x);
    scanf("%d",&pos);
    int ar[x+1];
    for (int i = 0; i <x; i++)
    {
        scanf("%d",&ar[i]);
    }
    for (int i = x; i >= pos +1; i--)
    {
        ar[i]=ar[i-1];
    }
    ar[pos]=100;
    for (int i = 0; i <=x; i++)
    {
        printf("%d ",ar[i]);
    }
    
    
    
   return 0;
}