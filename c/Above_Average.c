#include<stdio.h>
int main()
{
    int a[1000];
    int n,z=0,x=0,y,i,b;
    scanf("%d",&b);
    while(b-->0)
    {
        scanf("%d",&n);
        x=0;
        z=0;
  
        for(i=0 ; i<n ; i++)
        {
            scanf("%d",&a[i]);
            x+=a[i];
  
  
  
        }
        y=x/n;
        for(i=0 ; i<n ; i++)
        {
            if(y<a[i])
            {
                z++;
            }
        }
        printf("%.3f%c\n",(z*100.0)/n,'%');
    }
    return 0;
}