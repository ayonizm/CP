#include <stdio.h>
int main()
{
    int n, number;
    int even = 0;
    int odd = 0;
    int neg = 0;
    int pos = 0;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &number);
        if (number % 2 == 0)
        {
            even++;
            if (number > 0)
            {
                pos++;
            }
            else if (number < 0)
            {
                neg++;
            }
        }
        else if (number % 2 != 0)
        {
            odd++;
            if (number > 0)
            {
                pos++;
            }
            else if (number < 0)
            {
                neg++;
            }
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);

    return 0;
}