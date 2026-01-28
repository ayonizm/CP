#include <stdio.h>
#include <string.h>
int main()
{
    int count = 0;
    int n;
    while (scanf("%d", &n) != EOF)
    {

        if (n == 0)
        {
            break;
        }

        char name[n][100];
        for (int i = 0; i < n; i++)
        {
            scanf("%s", &name[i]);
        }
        int big = 0;
        int x;
        for (int i = 0; i < n; i++)
        {
            x = strlen(name[i]);
            if (x >= big)
            {
                big = x;
            }
        }
        for (int i = 0; i < n; i++)
        {
            x = strlen(name[i]);
            int lol = big - x;
            for (int j = 0; j < lol; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < x; j++)
            {
                printf("%c", name[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
