#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 0; a < n; a++)
    {
        char name[120];
        scanf("%s", name);
        int len = strlen(name);
        for (int i = len - 1; i >= 0; i--)
        {
            if (name[i] >= 'a' && name[i] <= 'z')
            {
                printf("%c", name[i]);
            }
        }
        printf("\n");
    }

    return 0;
}