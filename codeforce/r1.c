#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int ar[x];
    int sum = 0;
    for (int i = 0; i < x; i++)
    {
        scanf("%d",&ar[i]);
        sum = sum + ar[i];
    }
    printf("%d",sum);

    return 0;
}