#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int pos;
    int number;
    scanf("%d",&pos);
    scanf("%d",&number);
    for (int i = n; i >=pos+1; i--)
    {
        ar[i]=ar[i-1];
    }
    ar[pos]=number;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ",ar[i]);
    }
    

   
return 0;
}