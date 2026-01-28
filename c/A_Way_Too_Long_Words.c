#include <stdio.h>
#include <string.h>
int main()
{
    int x;
    char name[1000];
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        scanf("%s", name);
        int len = strlen(name);
        if (len <= 10)
        {
            printf("%s", name);
            printf("\n");

            continue;
        }
        else if (len > 10)
        {
            printf("%c", name[0]);
            printf("%d",len-2);
            printf("%c", name[len - 1]);
            
        }

        printf("\n");
    }

    return 0;
}