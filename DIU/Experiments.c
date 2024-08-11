#include<stdio.h>
int main ()
{
   int x;
   scanf("%d",&x);
   char c = 'C';
   char r = 'R';
   char s = 'S';

   int c_num = 0;
   int r_num = 0;
   int s_num = 0;
   int total = 0;

   for (int i = 0; i < x; i++)
   {
    int o;
    char ch;
    scanf("%d %c",&o,&ch);
    total = total + o;

    if (ch==c)
    {
        c_num = c_num + o;
    }
    else if (ch==r)
    {
        r_num = r_num + o; 
    }
    else if (ch==s)
    {
        s_num = s_num + o;
    }

   }

   printf("Total: %d cobaias\n",total);
   printf("Total de coelhos: %d\n",c_num);
   printf("Total de ratos: %d\n",r_num);
   printf("Total de sapos: %d\n",s_num);
   
   float c1 = c_num;
   float r1 = r_num;
   float s1 = s_num;
   float total1 = total;

   float cper = (c1/total1)*100;
   float rper = (r1/total1)*100;
   float sper = (s1/total1)*100;
   
   printf("Percentual de coelhos: %.2f %%\n",cper);
   printf("Percentual de ratos: %.2f %%\n",rper);
   printf("Percentual de sapos: %.2f %%\n",sper);
   return 0;
}