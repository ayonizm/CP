#include<stdio.h>
#include<string.h>
int main()
{
    int x;
    scanf("%d", &x);
    int k = 1;
    int s = 1;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf("%d ", s);
        }
        printf("\n");
        k++;
        s++;
    }
    
    return 0;
}