#include<stdio.h>
int main ()
{
   double n,temp1,temp2,sum;
   int count = 0;
   
    while (scanf("%lf",&n)!=EOF)
    {
     if (n<0.0 || n>10.0)
        {
            printf("nota invalida\n");
            continue;
        }
        else if (n>=0.0 && n<=10.0)
        {
            count++;
            if (count==1)
            {
               temp1 = n;
            }
            else if (count==2)
            {
                temp2 = n;
                double sum = temp2 + temp1;
                printf("media = %.2lf\n",sum/2.0);
                int a1,a2;
                scanf("%d",&a1);
                printf("novo calculo (1-sim 2-nao)\n");
                if (a1==2)
                {
                    break;
                }

                scanf("%d",&a2);
                printf("novo calculo (1-sim 2-nao)\n");
                if (a2==2)
                {
                    break;
                }
                count=0;
            }
            
             
        }   
    }
   return 0;
}