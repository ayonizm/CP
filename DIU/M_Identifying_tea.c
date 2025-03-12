#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        int count = 0;
        int ar[5];
        for (int i = 0; i < 5; i++)
        {
            scanf("%d", &ar[i]);
        }
        for (int i = 0; i < 5; i++)
        {
            if (ar[i]==n)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    

    return 0;
}