#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        getchar();
        if (n == 0)
        {
            break;
        }

        char name[n][100];
        int ar1[n];
        int ar2[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%s", name[i]);
            scanf("%d %d", &ar1[i], &ar2[i]);
        }
        int real = ar1[0] - ar2[0];
        int pos = 0;
        int temp;
        for (int i = 1; i < n; i++)
        {
            temp = ar1[i] - ar2[i];
            if (temp < real)
            {
                real = temp;
                pos = i;
            }
        }
        printf("%s\n", name[pos]);
    }

    return 0;
}