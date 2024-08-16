#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    int x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        scanf("%d", &x);
        for (int j = 0; j < x; j++)
        {
            int line = 0;
            char name[200];
            scanf("%s", &name);
            int len = strlen(name);
            for (int k = 0; k < len; k++)
            {
                int ayon = name[k] - 'A';
                sum = sum + ayon + j + k;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}