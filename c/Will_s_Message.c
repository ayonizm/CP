#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    while (scanf("%s", &name) != EOF)
    {

        int n;
        scanf("%d", &n);
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }
        for (int i = 0; i < n; i++)
        {
            printf("%c", name[ar[i] - 1]);
        }
        printf("\n");
    }

    return 0;
}