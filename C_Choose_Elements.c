#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int ar[n];
    int num;
    scanf("%d", &num);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }
    long long int sum = 0;
    for (int i = 0; i < num; i++)
    {
        long long int big = 0;
        int pos = 0;
        for (int j = 0; j < n; j++)
        {
            if (ar[j] > big)
            {
                big = ar[j];
                pos = j;
            }
        }
        sum = sum + big;
        ar[pos] = 0;
    }
    printf("%lld\n", sum);

    return 0;
}
