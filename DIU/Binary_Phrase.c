#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        char bin[10];
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            scanf("%s", bin);
            int len = strlen(bin);
            int count = 0;
            for (int j = len - 1; j >= 0; j--)
            {
                if (bin[j] == '1')
                {
                    sum += (int)pow(2, count);
                }
                count++;
            }

            printf("%c", (char)sum);
        }
        printf("\n");
    }
    return 0;
}
