#include<stdio.h>
int main ()
{
   int x;
   while (scanf("%d",&x)!=EOF)
   {
    int count;
    int h = x/2;
    if (x%2==0)
    {
         count = 0;
    }
    else if (x%2!=0){
         count = 1;
    }
    if (count==1)
    {
        int k =1;
        for (int i = 0; i <h+1; i++)
        {
            
            for (int j = h - i; j >0; j--)
            {
                printf(" ");
            }
            for (int j = 0; j < k; j++)
            {
                printf("*");
            }
            printf("\n");
            k = k +2;
            
            
        }
        for (int i = 0; i < 2; i++)
        {

          for (int j = h-i; j >0; j--)
            {
                printf(" ");
            }  
            k = 1;
            for (int j = 0; j < k + i + i ; j++)
            {
                printf("*");
            }
            printf("\n");
            
        }
        
     printf("\n");   
    }
    else if (count==0)
    {
       int k =1;
        for (int i = 0; i <h; i++)
        {
            
            for (int j = h - i; j >0; j--)
            {
                printf(" ");
            }
            for (int j = 0; j < k; j++)
            {
                printf("*");
            }
            printf("\n");
            k = k +2;
            
            
        }
        for (int i = 0; i < 2; i++)
        {

          for (int j = h-i; j >0; j--)
            {
                printf(" ");
            }  
            k = 1;
            for (int j = 0; j < k + i + i ; j++)
            {
                printf("*");
            }
            printf("\n");
            
        } 
       printf("\n"); 
    }
    
    
   }
   
   return 0;
}