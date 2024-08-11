#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char name[n];
    scanf("%c", name);
    int count = 0;
    for (int i = 0; i != '\0'; i++)
    {
        int x = name[i] - 48;
        printf("%d/n",x);
        // scanf("%c", name[i]);
    }
    for (int i = 0; i != '\0'; i++)
    {
        int x = name[i] - 48;
        printf("%d/n",x);
        // printf("%c", name[i]);
    }

    return 0;
}
