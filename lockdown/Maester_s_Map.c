#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    char x[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf(" %c",&x[a][b]);
        }
        
    }
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
                count++;
            if (x[i][j]=='*')
            {
                printf("*\n");
                break;
            }
            
        }
        
    }
    if (count==(a*b));
    {
        printf("!\n");
    }
    
    
   return 0;
}