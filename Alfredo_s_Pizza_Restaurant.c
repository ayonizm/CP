#include<stdio.h>
#include<math.h>
int main ()
{
    int count = 1;
   float  table,len,wid;

   while (scanf("%f %f %f",&table,&len,&wid)!=EOF)
   {
    if (table == 0 || len == 0 || wid == 0)
    {
        break;
    }
    float root = sqrt((len*len)+(wid*wid));
    if (root<=table*2)
    {
        printf("Pizza %d fits on the table.\n",count);
    }
    else{
        printf("Pizza %d does not fit on the table.\n",count);

    }
    count++;
   }
   return 0;
}