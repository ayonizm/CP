#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        char name[n];
        scanf("%s", &name);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int temp = name[i] - '0';
            sum = sum + temp;
        }
        if (sum % 3 == 0)
        {
            printf("%d sim\n", sum);
        }
        else
        {

            printf("%d nao\n", sum);
        }
    }

    return 0;
}