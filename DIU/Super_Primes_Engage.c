#include<stdio.h>
int prime(int num){
    if (num<=1)
    {
        return 0;
    }
    if (num==2)
    {
        return 1;
    }
    for (int i = 2; i <num ; i++)
    {
        if (num%i==0)
        {
            return 0;
        }
        
    }
    return 1;    
    
}
int main ()
{
   int x;
   while (scanf("%d",&x)!=EOF)
   {
    if (prime(x)==0)
    {
        printf("Nada\n");
    }
    else if (prime(x)==1)
    {
        int bol = 1;
        do
        {
        int temp = x%10; 
        x = x/10;
            if (prime(temp)==1)
            {
                bol = 1;
            }
            else if (prime(temp)!=1)
            {
                bol = 0;
                break;
            }
            
            
        } while (x>0);
        if (bol==1)
        {
            printf("Super\n");
        }
        else if (bol==0)
        {
            printf("Primo\n");
        }
        
        

    }
    
    
   }
   
   return 0;
}