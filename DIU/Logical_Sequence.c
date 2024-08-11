#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
           long int temp1 = i * i;
            long int temp2 = i * i * i;
        for (int j = 0; j < 2; j++)
        {
            printf("%d %ld %ld\n",i,temp1,temp2);
            temp1++;
            temp2++;
        }
        
    }
    
    return 0;
}